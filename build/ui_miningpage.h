/********************************************************************************
** Form generated from reading UI file 'miningpage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MININGPAGE_H
#define UI_MININGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiningPage
{
public:
    QGridLayout *gridLayout;
    QLineEdit *serverLine;
    QLabel *usernameLabel;
    QLabel *serverLabel;
    QLineEdit *usernameLine;
    QLabel *passwordLabel;
    QLabel *portLabel;
    QPushButton *startButton;
    QFrame *line;
    QListWidget *list;
    QLabel *shareCount;
    QLabel *scantimeLabel;
    QLabel *threadsLabel;
    QCheckBox *debugCheckBox;
    QLabel *typeLabel;
    QSpinBox *threadsBox;
    QComboBox *typeBox;
    QSpinBox *scantimeBox;
    QLineEdit *portLine;
    QLineEdit *passwordLine;
    QLabel *mineSpeedLabel;

    void setupUi(QWidget *MiningPage)
    {
        if (MiningPage->objectName().isEmpty())
            MiningPage->setObjectName(QStringLiteral("MiningPage"));
        MiningPage->resize(780, 636);
        gridLayout = new QGridLayout(MiningPage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        serverLine = new QLineEdit(MiningPage);
        serverLine->setObjectName(QStringLiteral("serverLine"));
        serverLine->setEnabled(true);

        gridLayout->addWidget(serverLine, 7, 1, 1, 1);

        usernameLabel = new QLabel(MiningPage);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setEnabled(true);

        gridLayout->addWidget(usernameLabel, 6, 3, 1, 1);

        serverLabel = new QLabel(MiningPage);
        serverLabel->setObjectName(QStringLiteral("serverLabel"));
        serverLabel->setEnabled(true);

        gridLayout->addWidget(serverLabel, 6, 1, 1, 1);

        usernameLine = new QLineEdit(MiningPage);
        usernameLine->setObjectName(QStringLiteral("usernameLine"));
        usernameLine->setEnabled(true);

        gridLayout->addWidget(usernameLine, 7, 3, 1, 1);

        passwordLabel = new QLabel(MiningPage);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setEnabled(true);

        gridLayout->addWidget(passwordLabel, 6, 4, 1, 1);

        portLabel = new QLabel(MiningPage);
        portLabel->setObjectName(QStringLiteral("portLabel"));
        portLabel->setEnabled(true);

        gridLayout->addWidget(portLabel, 6, 2, 1, 1);

        startButton = new QPushButton(MiningPage);
        startButton->setObjectName(QStringLiteral("startButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(startButton, 3, 4, 1, 1);

        line = new QFrame(MiningPage);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setMinimumSize(QSize(0, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 8, 1, 1, 4);

        list = new QListWidget(MiningPage);
        list->setObjectName(QStringLiteral("list"));
        list->setAutoScrollMargin(100000);
        list->setDragDropMode(QAbstractItemView::DragOnly);
        list->setSelectionMode(QAbstractItemView::NoSelection);
        list->setMovement(QListView::Snap);
        list->setBatchSize(10);

        gridLayout->addWidget(list, 13, 1, 1, 4);

        shareCount = new QLabel(MiningPage);
        shareCount->setObjectName(QStringLiteral("shareCount"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        shareCount->setFont(font);

        gridLayout->addWidget(shareCount, 14, 1, 1, 2);

        scantimeLabel = new QLabel(MiningPage);
        scantimeLabel->setObjectName(QStringLiteral("scantimeLabel"));
        scantimeLabel->setEnabled(true);
        scantimeLabel->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(scantimeLabel, 3, 3, 1, 1);

        threadsLabel = new QLabel(MiningPage);
        threadsLabel->setObjectName(QStringLiteral("threadsLabel"));
        threadsLabel->setEnabled(true);

        gridLayout->addWidget(threadsLabel, 3, 2, 1, 1);

        debugCheckBox = new QCheckBox(MiningPage);
        debugCheckBox->setObjectName(QStringLiteral("debugCheckBox"));

        gridLayout->addWidget(debugCheckBox, 4, 4, 1, 1);

        typeLabel = new QLabel(MiningPage);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));

        gridLayout->addWidget(typeLabel, 3, 1, 1, 1);

        threadsBox = new QSpinBox(MiningPage);
        threadsBox->setObjectName(QStringLiteral("threadsBox"));
        threadsBox->setEnabled(true);
        threadsBox->setMinimum(1);
        threadsBox->setMaximum(99);
        threadsBox->setSingleStep(1);

        gridLayout->addWidget(threadsBox, 4, 2, 1, 1);

        typeBox = new QComboBox(MiningPage);
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->setObjectName(QStringLiteral("typeBox"));
        typeBox->setEditable(false);

        gridLayout->addWidget(typeBox, 4, 1, 1, 1);

        scantimeBox = new QSpinBox(MiningPage);
        scantimeBox->setObjectName(QStringLiteral("scantimeBox"));
        scantimeBox->setEnabled(true);
        scantimeBox->setMinimum(1);
        scantimeBox->setValue(5);

        gridLayout->addWidget(scantimeBox, 4, 3, 1, 1);

        portLine = new QLineEdit(MiningPage);
        portLine->setObjectName(QStringLiteral("portLine"));
        portLine->setEnabled(true);
        portLine->setProperty("value", QVariant(8669));

        gridLayout->addWidget(portLine, 7, 2, 1, 1);

        passwordLine = new QLineEdit(MiningPage);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));
        passwordLine->setEnabled(true);

        gridLayout->addWidget(passwordLine, 7, 4, 1, 1);

        mineSpeedLabel = new QLabel(MiningPage);
        mineSpeedLabel->setObjectName(QStringLiteral("mineSpeedLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mineSpeedLabel->sizePolicy().hasHeightForWidth());
        mineSpeedLabel->setSizePolicy(sizePolicy2);
        mineSpeedLabel->setFont(font);
        mineSpeedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mineSpeedLabel, 14, 3, 1, 2);

        QWidget::setTabOrder(startButton, typeBox);
        QWidget::setTabOrder(typeBox, threadsBox);
        QWidget::setTabOrder(threadsBox, scantimeBox);
        QWidget::setTabOrder(scantimeBox, serverLine);
        QWidget::setTabOrder(serverLine, portLine);
        QWidget::setTabOrder(portLine, usernameLine);
        QWidget::setTabOrder(usernameLine, passwordLine);
        QWidget::setTabOrder(passwordLine, debugCheckBox);
        QWidget::setTabOrder(debugCheckBox, list);

        retranslateUi(MiningPage);

        typeBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MiningPage);
    } // setupUi

    void retranslateUi(QWidget *MiningPage)
    {
        MiningPage->setWindowTitle(QApplication::translate("MiningPage", "Mining", nullptr));
        usernameLabel->setText(QApplication::translate("MiningPage", "Username", nullptr));
        serverLabel->setText(QApplication::translate("MiningPage", "Server", nullptr));
        usernameLine->setText(QString());
        passwordLabel->setText(QApplication::translate("MiningPage", "Password", nullptr));
        portLabel->setText(QApplication::translate("MiningPage", "Port", nullptr));
        startButton->setText(QApplication::translate("MiningPage", "Start Mining", nullptr));
        shareCount->setText(QString());
        scantimeLabel->setText(QApplication::translate("MiningPage", "Scantime", nullptr));
        threadsLabel->setText(QApplication::translate("MiningPage", "Threads", nullptr));
        debugCheckBox->setText(QApplication::translate("MiningPage", "Debug Logging", nullptr));
        typeLabel->setText(QApplication::translate("MiningPage", "Type", nullptr));
        typeBox->setItemText(0, QApplication::translate("MiningPage", "Solo Mining", nullptr));
        typeBox->setItemText(1, QApplication::translate("MiningPage", "Pool Mining", nullptr));

        portLine->setText(QApplication::translate("MiningPage", "8669", nullptr));
        mineSpeedLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MiningPage: public Ui_MiningPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MININGPAGE_H
