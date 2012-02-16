#include "lab2.h"
#include "ui_lab2.h"

char english_letters[26] =
{
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r',
    's','t','u','v','w','x','y','z'
};

char russian_letters[33] =
{
    'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й', 'к',
    'л','м', 'н', 'о', 'п', 'р', 'с', 'т','у', 'ф', 'х','ц',
    'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю'
};

Lab2::Lab2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lab2)
{
    english_p['a'] = 0.081;
    english_p['b'] = 0.016;
    english_p['c'] = 0.032;
    english_p['d'] = 0.036;
    english_p['e'] = 0.123;
    english_p['f'] = 0.023;
    english_p['g'] = 0.016;
    english_p['h'] = 0.051;
    english_p['i'] = 0.071;
    english_p['j'] = 0.001;
    english_p['k'] = 0.005;
    english_p['l'] = 0.040;
    english_p['m'] = 0.022;
    english_p['n'] = 0.072;
    english_p['o'] = 0.079;
    english_p['p'] = 0.023;
    english_p['q'] = 0.002;
    english_p['r'] = 0.060;
    english_p['s'] = 0.066;
    english_p['t'] = 0.096;
    english_p['u'] = 0.031;
    english_p['v'] = 0.009;
    english_p['w'] = 0.020;
    english_p['x'] = 0.002;
    english_p['y'] = 0.019;
    english_p['z'] = 0.001;

    ui->setupUi(this);
}

Lab2::~Lab2()
{
    delete ui;
}

void Lab2::on_btnEncrypt_clicked()
{
    int a = this->ui->editA->text().toInt();
    int b = this->ui->editB->text().toInt();
    int m = this->ui->editM->text().toInt();
    QString input = this->ui->textInput->toPlainText().toLower();
    char *alphabet;

    if (this->ui->rbRussian->isChecked())
    {
        alphabet = russian_letters;
    } else
    {
        alphabet = english_letters;
    }

    char *encrypted = new char[input.length() + 1];
    affine_encrypt(input.toStdString().c_str(), alphabet,  a, b,m, encrypted);

    QString res = QString::fromStdString(encrypted);
    this->ui->textOutput->setPlainText(res);
}

void Lab2::on_rbRussian_clicked()
{
    this->ui->editM->setText("33");
}

void Lab2::on_rbEnglish_clicked()
{
    this->ui->editM->setText("26");
}

void Lab2::on_btnDecrypt_clicked()
{
    int a = this->ui->editA->text().toInt();
    int b = this->ui->editB->text().toInt();
    int m = this->ui->editM->text().toInt();
    QString input = this->ui->textInput->toPlainText().toLower();
    char *alphabet;

    if (this->ui->rbRussian->isChecked())
    {
        alphabet = russian_letters;
    } else
    {
        alphabet = english_letters;
    }

    char *decrypted = new char[input.length() + 1];
    affine_decrypt(input.toStdString().c_str(), alphabet,  a, b,m, decrypted);

    QString res = QString::fromStdString(decrypted);
    this->ui->textOutput->setPlainText(res);
}

void Lab2::on_btnAnalyze_clicked()
{
    char *alphabet;
    QString input = this->ui->textInput->toPlainText().toLower();
    //wchar_t *alphabet;
    int m = this->ui->editM->text().toInt();
    if (this->ui->rbRussian->isChecked())
    {
       alphabet = russian_letters;
    } else
    {
       alphabet = english_letters;
    }

    alphabet = english_letters;
    m = 26;
    char *decrypted = new char[input.length() + 1];
    analyze_decrypt(english_p, input.toStdString().c_str(), decrypted, alphabet, m);

    QString res = QString::fromStdString(decrypted);
    this->ui->textOutput->setPlainText(res);
}
