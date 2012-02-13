/********************************************************************************
** Form generated from reading UI file 'lab2.ui'
**
** Created: Mon Feb 13 04:56:52 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB2_H
#define UI_LAB2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Lab2
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *textInput;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLineEdit *editA;
    QLineEdit *editB;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *editM;
    QLabel *label_3;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbRussian;
    QRadioButton *rbEnglish;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *textOutput;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnEncrypt;
    QPushButton *btnDecrypt;
    QPushButton *btnAnalyze;

    void setupUi(QDialog *Lab2)
    {
        if (Lab2->objectName().isEmpty())
            Lab2->setObjectName(QString::fromUtf8("Lab2"));
        Lab2->resize(404, 429);
        gridLayout_2 = new QGridLayout(Lab2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(Lab2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textInput = new QPlainTextEdit(groupBox);
        textInput->setObjectName(QString::fromUtf8("textInput"));

        horizontalLayout_2->addWidget(textInput);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(Lab2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        editA = new QLineEdit(groupBox_2);
        editA->setObjectName(QString::fromUtf8("editA"));

        gridLayout->addWidget(editA, 1, 0, 1, 1);

        editB = new QLineEdit(groupBox_2);
        editB->setObjectName(QString::fromUtf8("editB"));

        gridLayout->addWidget(editB, 1, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        editM = new QLineEdit(groupBox_2);
        editM->setObjectName(QString::fromUtf8("editM"));
        editM->setEnabled(false);
        editM->setReadOnly(true);

        gridLayout->addWidget(editM, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rbRussian = new QRadioButton(groupBox_5);
        rbRussian->setObjectName(QString::fromUtf8("rbRussian"));
        rbRussian->setChecked(true);

        verticalLayout->addWidget(rbRussian);

        rbEnglish = new QRadioButton(groupBox_5);
        rbEnglish->setObjectName(QString::fromUtf8("rbEnglish"));

        verticalLayout->addWidget(rbEnglish);


        gridLayout->addWidget(groupBox_5, 0, 3, 2, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 2);

        groupBox_3 = new QGroupBox(Lab2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textOutput = new QPlainTextEdit(groupBox_3);
        textOutput->setObjectName(QString::fromUtf8("textOutput"));

        horizontalLayout->addWidget(textOutput);


        gridLayout_2->addWidget(groupBox_3, 2, 0, 1, 2);

        groupBox_4 = new QGroupBox(Lab2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnEncrypt = new QPushButton(groupBox_4);
        btnEncrypt->setObjectName(QString::fromUtf8("btnEncrypt"));

        horizontalLayout_3->addWidget(btnEncrypt);

        btnDecrypt = new QPushButton(groupBox_4);
        btnDecrypt->setObjectName(QString::fromUtf8("btnDecrypt"));

        horizontalLayout_3->addWidget(btnDecrypt);

        btnAnalyze = new QPushButton(groupBox_4);
        btnAnalyze->setObjectName(QString::fromUtf8("btnAnalyze"));

        horizontalLayout_3->addWidget(btnAnalyze);


        gridLayout_2->addWidget(groupBox_4, 3, 0, 1, 2);


        retranslateUi(Lab2);

        QMetaObject::connectSlotsByName(Lab2);
    } // setupUi

    void retranslateUi(QDialog *Lab2)
    {
        Lab2->setWindowTitle(QApplication::translate("Lab2", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Lab2", "Input data", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Lab2", "Encryption settings", 0, QApplication::UnicodeUTF8));
        editA->setText(QApplication::translate("Lab2", "3", 0, QApplication::UnicodeUTF8));
        editB->setText(QApplication::translate("Lab2", "5", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Lab2", "a", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Lab2", "b", 0, QApplication::UnicodeUTF8));
        editM->setText(QApplication::translate("Lab2", "33", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Lab2", "m", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("Lab2", "Language settings", 0, QApplication::UnicodeUTF8));
        rbRussian->setText(QApplication::translate("Lab2", "Russian", 0, QApplication::UnicodeUTF8));
        rbEnglish->setText(QApplication::translate("Lab2", "English", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Lab2", "Output data", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("Lab2", "Actions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnEncrypt->setToolTip(QApplication::translate("Lab2", "Encrypt data using affine Caesar encryption", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnEncrypt->setText(QApplication::translate("Lab2", "Encrypt", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnDecrypt->setToolTip(QApplication::translate("Lab2", "Decrypt using affine Caesar encryption", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnDecrypt->setText(QApplication::translate("Lab2", "Decrypt", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAnalyze->setToolTip(QApplication::translate("Lab2", "Analyze frequencies", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAnalyze->setText(QApplication::translate("Lab2", "Analyze", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Lab2: public Ui_Lab2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB2_H
