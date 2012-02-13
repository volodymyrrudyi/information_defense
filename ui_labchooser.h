/********************************************************************************
** Form generated from reading UI file 'labchooser.ui'
**
** Created: Mon Feb 13 04:56:52 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABCHOOSER_H
#define UI_LABCHOOSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LabChooser
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbLw1;
    QRadioButton *rbLw2;
    QRadioButton *rbLw3;
    QPushButton *btnLaunch;

    void setupUi(QDialog *LabChooser)
    {
        if (LabChooser->objectName().isEmpty())
            LabChooser->setObjectName(QString::fromUtf8("LabChooser"));
        LabChooser->resize(400, 300);
        verticalLayout = new QVBoxLayout(LabChooser);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(LabChooser);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rbLw1 = new QRadioButton(groupBox);
        rbLw1->setObjectName(QString::fromUtf8("rbLw1"));

        verticalLayout_2->addWidget(rbLw1);

        rbLw2 = new QRadioButton(groupBox);
        rbLw2->setObjectName(QString::fromUtf8("rbLw2"));
        rbLw2->setChecked(true);

        verticalLayout_2->addWidget(rbLw2);

        rbLw3 = new QRadioButton(groupBox);
        rbLw3->setObjectName(QString::fromUtf8("rbLw3"));

        verticalLayout_2->addWidget(rbLw3);


        verticalLayout->addWidget(groupBox);

        btnLaunch = new QPushButton(LabChooser);
        btnLaunch->setObjectName(QString::fromUtf8("btnLaunch"));

        verticalLayout->addWidget(btnLaunch);


        retranslateUi(LabChooser);

        QMetaObject::connectSlotsByName(LabChooser);
    } // setupUi

    void retranslateUi(QDialog *LabChooser)
    {
        LabChooser->setWindowTitle(QApplication::translate("LabChooser", "Choose laboratory work", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("LabChooser", "Laboratory works", 0, QApplication::UnicodeUTF8));
        rbLw1->setText(QApplication::translate("LabChooser", "LW1: Basic substitution cyphers", 0, QApplication::UnicodeUTF8));
        rbLw2->setText(QApplication::translate("LabChooser", "LW2: Frequency Analysis", 0, QApplication::UnicodeUTF8));
        rbLw3->setText(QApplication::translate("LabChooser", "LW3: Security policies", 0, QApplication::UnicodeUTF8));
        btnLaunch->setText(QApplication::translate("LabChooser", "Launch", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LabChooser: public Ui_LabChooser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABCHOOSER_H
