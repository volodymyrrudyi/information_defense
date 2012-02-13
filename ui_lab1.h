/********************************************************************************
** Form generated from reading UI file 'lab1.ui'
**
** Created: Mon Feb 13 04:56:52 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB1_H
#define UI_LAB1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Lab1
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QPlainTextEdit *editMessage;
    QLabel *lblRequiredLength;
    QLabel *labelInputLength;
    QCheckBox *checkRemoveSpaces;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLineEdit *editFirstKey;
    QLineEdit *editSecondKey;
    QLabel *lblKey1Length;
    QLabel *label_4;
    QLabel *lblKey2Length;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QPlainTextEdit *editResult;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnEncrypt;
    QPushButton *btnDecrypt;

    void setupUi(QDialog *Lab1)
    {
        if (Lab1->objectName().isEmpty())
            Lab1->setObjectName(QString::fromUtf8("Lab1"));
        Lab1->resize(486, 629);
        verticalLayout = new QVBoxLayout(Lab1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Lab1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        editMessage = new QPlainTextEdit(groupBox);
        editMessage->setObjectName(QString::fromUtf8("editMessage"));

        gridLayout_2->addWidget(editMessage, 1, 1, 2, 2);

        lblRequiredLength = new QLabel(groupBox);
        lblRequiredLength->setObjectName(QString::fromUtf8("lblRequiredLength"));

        gridLayout_2->addWidget(lblRequiredLength, 3, 2, 1, 1);

        labelInputLength = new QLabel(groupBox);
        labelInputLength->setObjectName(QString::fromUtf8("labelInputLength"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelInputLength->sizePolicy().hasHeightForWidth());
        labelInputLength->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(labelInputLength, 3, 1, 1, 1);

        checkRemoveSpaces = new QCheckBox(groupBox);
        checkRemoveSpaces->setObjectName(QString::fromUtf8("checkRemoveSpaces"));

        gridLayout_2->addWidget(checkRemoveSpaces, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(Lab1);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        editFirstKey = new QLineEdit(groupBox_3);
        editFirstKey->setObjectName(QString::fromUtf8("editFirstKey"));

        gridLayout_4->addWidget(editFirstKey, 2, 0, 1, 3);

        editSecondKey = new QLineEdit(groupBox_3);
        editSecondKey->setObjectName(QString::fromUtf8("editSecondKey"));

        gridLayout_4->addWidget(editSecondKey, 4, 0, 1, 3);

        lblKey1Length = new QLabel(groupBox_3);
        lblKey1Length->setObjectName(QString::fromUtf8("lblKey1Length"));

        gridLayout_4->addWidget(lblKey1Length, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 3, 0, 1, 1);

        lblKey2Length = new QLabel(groupBox_3);
        lblKey2Length->setObjectName(QString::fromUtf8("lblKey2Length"));

        gridLayout_4->addWidget(lblKey2Length, 3, 2, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 2);


        verticalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(Lab1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 1, 1, 1);

        editResult = new QPlainTextEdit(groupBox_2);
        editResult->setObjectName(QString::fromUtf8("editResult"));

        gridLayout_3->addWidget(editResult, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(Lab1);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnEncrypt = new QPushButton(groupBox_4);
        btnEncrypt->setObjectName(QString::fromUtf8("btnEncrypt"));

        horizontalLayout_2->addWidget(btnEncrypt);

        btnDecrypt = new QPushButton(groupBox_4);
        btnDecrypt->setObjectName(QString::fromUtf8("btnDecrypt"));

        horizontalLayout_2->addWidget(btnDecrypt);


        verticalLayout->addWidget(groupBox_4);


        retranslateUi(Lab1);

        QMetaObject::connectSlotsByName(Lab1);
    } // setupUi

    void retranslateUi(QDialog *Lab1)
    {
        Lab1->setWindowTitle(QApplication::translate("Lab1", "Information defense", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Lab1", "Source data", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Lab1", "Message", 0, QApplication::UnicodeUTF8));
        editMessage->setPlainText(QApplication::translate("Lab1", "\320\223\320\240\320\243\320\227\320\230\320\242\320\225\320\220\320\237\320\225\320\233\320\254\320\241\320\230\320\235\320\253", 0, QApplication::UnicodeUTF8));
        lblRequiredLength->setText(QApplication::translate("Lab1", "Required length: Unknown", 0, QApplication::UnicodeUTF8));
        labelInputLength->setText(QApplication::translate("Lab1", "Text length: 0", 0, QApplication::UnicodeUTF8));
        checkRemoveSpaces->setText(QApplication::translate("Lab1", "Delete spaces", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Lab1", "Encryption keys", 0, QApplication::UnicodeUTF8));
        editFirstKey->setText(QApplication::translate("Lab1", "4132", 0, QApplication::UnicodeUTF8));
        editSecondKey->setText(QApplication::translate("Lab1", "3142", 0, QApplication::UnicodeUTF8));
        lblKey1Length->setText(QApplication::translate("Lab1", "Length: 0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Lab1", "Second key", 0, QApplication::UnicodeUTF8));
        lblKey2Length->setText(QApplication::translate("Lab1", "Length: 0", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Lab1", "First key", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Lab1", "Output data", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Lab1", "Result", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("Lab1", "Actions", 0, QApplication::UnicodeUTF8));
        btnEncrypt->setText(QApplication::translate("Lab1", "Encode", 0, QApplication::UnicodeUTF8));
        btnDecrypt->setText(QApplication::translate("Lab1", " Decode", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Lab1: public Ui_Lab1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB1_H
