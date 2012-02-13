#include "lab2.h"
#include "ui_lab2.h"

extern wchar_t english_letters[26] =
{
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r',
    's','t','u','v','w','x','y','z'
};

extern wchar_t russian_letters[33] =
{
    'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й', 'к',
    'л','м', 'н', 'о', 'п', 'р', 'с', 'т','у', 'ф', 'х','ц',
    'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю'
};

Lab2::Lab2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lab2)
{
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
    QString input = this->ui->textInput->toPlainText();
    wchar_t *alphabet;

    if (this->ui->rbRussian->isChecked())
    {
        alphabet = russian_letters;
    } else
    {
        alphabet = english_letters;
    }

    wchar_t *encrypted = new wchar_t[input.length() + 1];
    affine_encrypt(input.toStdWString().c_str(), alphabet,  a, b,m, encrypted);

    QString res = QString::fromStdWString(encrypted);
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
    QString input = this->ui->textInput->toPlainText();
    wchar_t *alphabet;

    if (this->ui->rbRussian->isChecked())
    {
        alphabet = russian_letters;
    } else
    {
        alphabet = english_letters;
    }

    wchar_t *decrypted = new wchar_t[input.length() + 1];
    affine_decrypt(input.toStdWString().c_str(), alphabet,  a, b,m, decrypted);

    QString res = QString::fromStdWString(decrypted);
    this->ui->textOutput->setPlainText(res);
}
