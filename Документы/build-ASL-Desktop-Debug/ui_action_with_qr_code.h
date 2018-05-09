/********************************************************************************
** Form generated from reading UI file 'action_with_qr_code.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTION_WITH_QR_CODE_H
#define UI_ACTION_WITH_QR_CODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Action_with_QR_code
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Action_with_QR_code)
    {
        if (Action_with_QR_code->objectName().isEmpty())
            Action_with_QR_code->setObjectName(QStringLiteral("Action_with_QR_code"));
        Action_with_QR_code->resize(287, 167);
        verticalLayout = new QVBoxLayout(Action_with_QR_code);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Action_with_QR_code);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(Action_with_QR_code);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        lcdNumber = new QLCDNumber(Action_with_QR_code);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        verticalLayout->addWidget(lcdNumber);

        pushButton_2 = new QPushButton(Action_with_QR_code);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Action_with_QR_code);

        QMetaObject::connectSlotsByName(Action_with_QR_code);
    } // setupUi

    void retranslateUi(QDialog *Action_with_QR_code)
    {
        Action_with_QR_code->setWindowTitle(QApplication::translate("Action_with_QR_code", "\320\237\320\276\320\264\320\275\320\265\321\201\320\270\321\202\320\265 QR \320\272\320\276\320\264", 0));
        label->setText(QApplication::translate("Action_with_QR_code", "\320\277\320\276\320\264\320\275\320\265\321\201\320\270\321\202\320\265 QR \320\272\320\276\320\264 \320\272 \320\272\320\260\320\274\320\265\321\200\320\265", 0));
        pushButton->setText(QApplication::translate("Action_with_QR_code", "\320\263\320\276\321\202\320\276\320\262\320\276", 0));
        pushButton_2->setText(QApplication::translate("Action_with_QR_code", "QR-\320\272\320\276\320\264 \320\275\320\265 \321\207\320\270\321\202\320\260\320\265\321\202\321\201\321\217?", 0));
    } // retranslateUi

};

namespace Ui {
    class Action_with_QR_code: public Ui_Action_with_QR_code {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTION_WITH_QR_CODE_H
