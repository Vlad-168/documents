/********************************************************************************
** Form generated from reading UI file 'uslovie.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USLOVIE_H
#define UI_USLOVIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Uslovie
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Uslovie)
    {
        if (Uslovie->objectName().isEmpty())
            Uslovie->setObjectName(QStringLiteral("Uslovie"));
        Uslovie->resize(232, 144);
        verticalLayout = new QVBoxLayout(Uslovie);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Uslovie);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(Uslovie);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Uslovie);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Uslovie);

        QMetaObject::connectSlotsByName(Uslovie);
    } // setupUi

    void retranslateUi(QDialog *Uslovie)
    {
        Uslovie->setWindowTitle(QApplication::translate("Uslovie", "\321\203\321\201\320\273\320\276\320\262\320\270\320\265", 0));
        label->setText(QApplication::translate("Uslovie", "\320\265\321\201\321\202\321\214 \320\265\321\211\320\265 \320\277\320\276\320\273\321\203\321\207\320\260\321\202\320\265\320\273\320\270?", 0));
        pushButton->setText(QApplication::translate("Uslovie", "\320\264\320\260", 0));
        pushButton_2->setText(QApplication::translate("Uslovie", "\320\275\320\265\321\202(\320\274\320\265\320\275\321\216)", 0));
    } // retranslateUi

};

namespace Ui {
    class Uslovie: public Ui_Uslovie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USLOVIE_H
