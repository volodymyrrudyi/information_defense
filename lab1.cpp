#include "lab1.h"
#include "ui_lab1.h"

Lab1::Lab1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lab1)
{
    ui->setupUi(this);
}

Lab1::~Lab1()
{
    delete ui;
}

void Lab1::on_btnEncrypt_clicked()
{
    QString key1 = this->ui->editFirstKey->text();
    QString key2 = this->ui->editSecondKey->text();
    QString input;
    if (this->ui->checkRemoveSpaces->isChecked())
    {
        input = this->ui->editMessage->document()->toPlainText().remove(' ');
    } else
    {
        input = this->ui->editMessage->document()->toPlainText();
    }

    wchar_t *encrypted = new wchar_t[input.length() + 1];
    encrypt(input.toStdWString().c_str(), encrypted, key1.toStdWString().c_str(),
            key2.toStdWString().c_str());

    QString res = QString::fromStdWString(encrypted);
    this->ui->editResult->document()->setPlainText(res);
}

void Lab1::on_btnDecrypt_clicked()
{
    QString key1 = this->ui->editFirstKey->text();
    QString key2 = this->ui->editSecondKey->text();
    QString input;

    if (this->ui->checkRemoveSpaces->isChecked())
    {
        input = this->ui->editMessage->document()->toPlainText().remove(' ');
    } else
    {
        input = this->ui->editMessage->document()->toPlainText();
    }

    wchar_t *decrypted = new wchar_t[input.length() + 1];
    decrypt(input.toStdWString().c_str(), decrypted, key1.toStdWString().c_str(),
            key2.toStdWString().c_str());

    QString res = QString::fromStdWString(decrypted);
    this->ui->editResult->document()->setPlainText(res);
}

void Lab1::on_editMessage_undoAvailable(bool b)
{

}

void Lab1::on_editMessage_textChanged()
{
    check_input();
    int input_length;

    if (this->ui->checkRemoveSpaces->isChecked())
    {
        input_length = this->ui->editMessage->document()->toPlainText().remove(' ').length();
    } else
    {
        input_length = this->ui->editMessage->document()->toPlainText().length();
    }
    QString strLength = QString("Text length: ") +
                                QString::number(input_length);
    this->ui->labelInputLength->setText(strLength);
}

void Lab1::check_input()
{

    int key1_length = this->ui->editFirstKey->text().length();
    int key2_length = this->ui->editSecondKey->text().length();
    int input_length;

    if (this->ui->checkRemoveSpaces->isChecked())
    {
        input_length = this->ui->editMessage->document()->toPlainText().remove(' ').length();
    } else
    {
        input_length = this->ui->editMessage->document()->toPlainText().length();
    }

    bool enableButtons = (key1_length > 1) && (key2_length > 1) &&
            (input_length == key1_length*key2_length);

    this->ui->btnEncrypt->setEnabled(enableButtons);
    this->ui->btnDecrypt->setEnabled(enableButtons);

    if (key1_length * key2_length != 0 )
    {
    QString strLength = QString("Required length: ") +
                                QString::number(key1_length * key2_length);
    this->ui->lblRequiredLength->setText(strLength);
    } else
    {
        this->ui->lblRequiredLength->setText("Required length: Unknown");
    }
}

void Lab1::on_editFirstKey_textChanged(const QString &arg1)
{
    check_input();
    QString strLength = QString("Length: ") +
                                QString::number(this->ui->editFirstKey->text().length());
    this->ui->lblKey1Length->setText(strLength);
}

void Lab1::on_editSecondKey_textChanged(const QString &arg1)
{
    check_input();
    QString strLength = QString("Length: ") +
                                QString::number(this->ui->editSecondKey->text().length());
    this->ui->lblKey2Length->setText(strLength);
}

