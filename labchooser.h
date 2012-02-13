#ifndef LABCHOOSER_H
#define LABCHOOSER_H

#include <QDialog>

namespace Ui {
class LabChooser;
}

class LabChooser : public QDialog
{
    Q_OBJECT
    
public:
    explicit LabChooser(QWidget *parent = 0);
    ~LabChooser();
    
private slots:
    void on_btnLaunch_clicked();

private:
    Ui::LabChooser *ui;
};

#endif // LABCHOOSER_H
