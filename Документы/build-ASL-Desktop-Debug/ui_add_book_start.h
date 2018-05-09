/********************************************************************************
** Form generated from reading UI file 'add_book_start.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_BOOK_START_H
#define UI_ADD_BOOK_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Add_book_start
{
public:
    QAction *Add_book_start_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *author;
    QSpacerItem *verticalSpacer;
    QLineEdit *izdanie;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *izdatel;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *godizdania;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *name;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *form;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *count;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Add_book_start)
    {
        if (Add_book_start->objectName().isEmpty())
            Add_book_start->setObjectName(QStringLiteral("Add_book_start"));
        Add_book_start->resize(424, 349);
        Add_book_start_2 = new QAction(Add_book_start);
        Add_book_start_2->setObjectName(QStringLiteral("Add_book_start_2"));
        Add_book_start_2->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(Add_book_start);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        author = new QLineEdit(Add_book_start);
        author->setObjectName(QStringLiteral("author"));

        verticalLayout->addWidget(author);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        izdanie = new QLineEdit(Add_book_start);
        izdanie->setObjectName(QStringLiteral("izdanie"));

        verticalLayout->addWidget(izdanie);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        izdatel = new QLineEdit(Add_book_start);
        izdatel->setObjectName(QStringLiteral("izdatel"));

        verticalLayout->addWidget(izdatel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        godizdania = new QLineEdit(Add_book_start);
        godizdania->setObjectName(QStringLiteral("godizdania"));

        verticalLayout->addWidget(godizdania);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        name = new QLineEdit(Add_book_start);
        name->setObjectName(QStringLiteral("name"));

        verticalLayout->addWidget(name);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        form = new QLineEdit(Add_book_start);
        form->setObjectName(QStringLiteral("form"));

        verticalLayout->addWidget(form);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        count = new QLineEdit(Add_book_start);
        count->setObjectName(QStringLiteral("count"));

        verticalLayout->addWidget(count);

        pushButton = new QPushButton(Add_book_start);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Add_book_start);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Add_book_start);

        QMetaObject::connectSlotsByName(Add_book_start);
    } // setupUi

    void retranslateUi(QDialog *Add_book_start)
    {
        Add_book_start->setWindowTitle(QApplication::translate("Add_book_start", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205 \320\272\320\275\320\270\320\263\320\270", 0));
        Add_book_start_2->setText(QApplication::translate("Add_book_start", "!!!!", 0));
        author->setText(QString());
        izdanie->setText(QString());
        izdatel->setText(QString());
        godizdania->setText(QString());
        name->setText(QString());
        form->setText(QString());
        count->setText(QString());
        pushButton->setText(QApplication::translate("Add_book_start", "\320\263\320\276\321\202\320\276\320\262\320\276", 0));
        pushButton_2->setText(QApplication::translate("Add_book_start", "\320\222 \320\274\320\265\320\275\321\216", 0));
    } // retranslateUi

};

namespace Ui {
    class Add_book_start: public Ui_Add_book_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_BOOK_START_H
