/********************************************************************************
** Form generated from reading UI file 'book_history.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_HISTORY_H
#define UI_BOOK_HISTORY_H

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

class Ui_Book_history
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Book_history)
    {
        if (Book_history->objectName().isEmpty())
            Book_history->setObjectName(QStringLiteral("Book_history"));
        Book_history->resize(212, 158);
        verticalLayout_2 = new QVBoxLayout(Book_history);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Book_history);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(Book_history);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Book_history);

        QMetaObject::connectSlotsByName(Book_history);
    } // setupUi

    void retranslateUi(QDialog *Book_history)
    {
        Book_history->setWindowTitle(QApplication::translate("Book_history", "Book's history", 0));
        label->setText(QApplication::translate("Book_history", "\320\277\320\276\320\264\320\275\320\265\321\201\320\270\321\202\320\265 QR-\320\272\320\276\320\264 \320\272 \320\272\320\260\320\274\320\265\321\200\320\265", 0));
        pushButton->setText(QApplication::translate("Book_history", "\320\263\320\276\321\202\320\276\320\262\320\276", 0));
    } // retranslateUi

};

namespace Ui {
    class Book_history: public Ui_Book_history {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_HISTORY_H
