/********************************************************************************
** Form generated from reading UI file 'vvod_id.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVOD_ID_H
#define UI_VVOD_ID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Vvod_ID
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Vvod_ID)
    {
        if (Vvod_ID->objectName().isEmpty())
            Vvod_ID->setObjectName(QStringLiteral("Vvod_ID"));
        Vvod_ID->resize(373, 204);
        verticalLayout = new QVBoxLayout(Vvod_ID);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Vvod_ID);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(Vvod_ID);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(Vvod_ID);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(Vvod_ID);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(Vvod_ID);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Vvod_ID);

        QMetaObject::connectSlotsByName(Vvod_ID);
    } // setupUi

    void retranslateUi(QDialog *Vvod_ID)
    {
        Vvod_ID->setWindowTitle(QApplication::translate("Vvod_ID", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        label->setText(QString());
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("Vvod_ID", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class Vvod_ID: public Ui_Vvod_ID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVOD_ID_H
