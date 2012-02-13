#ifndef LAB2_H
#define LAB2_H

#include <QDialog>
#include "crypto.h"

namespace Ui {
class Lab2;
}

class Lab2 : public QDialog
{
    Q_OBJECT
    
public:
    explicit Lab2(QWidget *parent = 0);
    ~Lab2();
    
private slots:
    void on_btnEncrypt_clicked();

    void on_rbRussian_clicked();

    void on_rbEnglish_clicked();

    void on_btnDecrypt_clicked();

private:
    Ui::Lab2 *ui;
};

#endif // LAB2_H
