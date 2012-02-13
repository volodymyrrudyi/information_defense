#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QFileDialog>
#include "crypto.h"

namespace Ui {
class Lab1;
}

class Lab1 : public QDialog
{
    Q_OBJECT
    
public:
    explicit Lab1(QWidget *parent = 0);
    ~Lab1();
    
private slots:
    void on_btnEncrypt_clicked();

    void on_editMessage_undoAvailable(bool b);

    void on_editMessage_textChanged();

    void on_editFirstKey_textChanged(const QString &arg1);

    void on_editSecondKey_textChanged(const QString &arg1);

    void on_btnDecrypt_clicked();

private:
    void check_input();
    Ui::Lab1 *ui;
};

#endif // MAINWINDOW_H
