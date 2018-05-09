/********************************************************************************
** Form generated from reading UI file 'dejurniy.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEJURNIY_H
#define UI_DEJURNIY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dejurniy
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Dejurniy)
    {
        if (Dejurniy->objectName().isEmpty())
            Dejurniy->setObjectName(QStringLiteral("Dejurniy"));
        Dejurniy->resize(171, 218);
        verticalLayout_2 = new QVBoxLayout(Dejurniy);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(Dejurniy);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(Dejurniy);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Dejurniy);

        QMetaObject::connectSlotsByName(Dejurniy);
    } // setupUi

    void retranslateUi(QDialog *Dejurniy)
    {
        Dejurniy->setWindowTitle(QApplication::translate("Dejurniy", "\320\222\321\213\320\264\320\260\321\207\320\260/\321\201\320\264\320\260\321\207\320\260", 0));
        lineEdit->setText(QString());
        pushButton->setText(QApplication::translate("Dejurniy", "\320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", 0));
    } // retranslateUi

};

namespace Ui {
    class Dejurniy: public Ui_Dejurniy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEJURNIY_H
