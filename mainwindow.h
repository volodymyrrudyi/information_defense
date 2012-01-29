#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include "crypto.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_btnEncrypt_clicked();

    void on_editMessage_undoAvailable(bool b);

    void on_editMessage_textChanged();

    void on_editFirstKey_textChanged(const QString &arg1);

    void on_editSecondKey_textChanged(const QString &arg1);

    void on_btnDecrypt_clicked();

private:
    void check_input();
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
