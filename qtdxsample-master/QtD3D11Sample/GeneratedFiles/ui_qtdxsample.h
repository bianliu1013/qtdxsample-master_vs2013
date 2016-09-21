/********************************************************************************
** Form generated from reading UI file 'qtdxsample.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDXSAMPLE_H
#define UI_QTDXSAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDXSampleClass
{
public:
    QAction *actionPlayPause;
    QAction *actionQuit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *paramWidget;
    QWidget *paramWidgetContents;
    QHBoxLayout *parameterWidgetLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *parameterScrollLayout;

    void setupUi(QMainWindow *QtDXSampleClass)
    {
        if (QtDXSampleClass->objectName().isEmpty())
            QtDXSampleClass->setObjectName(QStringLiteral("QtDXSampleClass"));
        QtDXSampleClass->resize(1024, 682);
        actionPlayPause = new QAction(QtDXSampleClass);
        actionPlayPause->setObjectName(QStringLiteral("actionPlayPause"));
        actionPlayPause->setCheckable(true);
        actionPlayPause->setChecked(false);
        actionPlayPause->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/media-play-16.png"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QStringLiteral(":/Resources/media-pause-16.png"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QStringLiteral(":/Resources/media-pause-16.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QStringLiteral(":/Resources/media-play-16.png"), QSize(), QIcon::Selected, QIcon::On);
        actionPlayPause->setIcon(icon);
        actionQuit = new QAction(QtDXSampleClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(QtDXSampleClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtDXSampleClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtDXSampleClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 24));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        QtDXSampleClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtDXSampleClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtDXSampleClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtDXSampleClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtDXSampleClass->setStatusBar(statusBar);
        paramWidget = new QDockWidget(QtDXSampleClass);
        paramWidget->setObjectName(QStringLiteral("paramWidget"));
        paramWidget->setMinimumSize(QSize(420, 111));
        paramWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        paramWidgetContents = new QWidget();
        paramWidgetContents->setObjectName(QStringLiteral("paramWidgetContents"));
        parameterWidgetLayout = new QHBoxLayout(paramWidgetContents);
        parameterWidgetLayout->setSpacing(0);
        parameterWidgetLayout->setContentsMargins(0, 0, 0, 0);
        parameterWidgetLayout->setObjectName(QStringLiteral("parameterWidgetLayout"));
        scrollArea = new QScrollArea(paramWidgetContents);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 418, 577));
        parameterScrollLayout = new QVBoxLayout(scrollAreaWidgetContents);
        parameterScrollLayout->setSpacing(6);
        parameterScrollLayout->setContentsMargins(11, 11, 11, 11);
        parameterScrollLayout->setObjectName(QStringLiteral("parameterScrollLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        parameterWidgetLayout->addWidget(scrollArea);

        paramWidget->setWidget(paramWidgetContents);
        QtDXSampleClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), paramWidget);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(actionQuit);
        mainToolBar->addAction(actionPlayPause);

        retranslateUi(QtDXSampleClass);
        QObject::connect(actionPlayPause, SIGNAL(triggered(bool)), QtDXSampleClass, SLOT(toggleAnimation(bool)));

        QMetaObject::connectSlotsByName(QtDXSampleClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtDXSampleClass)
    {
        QtDXSampleClass->setWindowTitle(QApplication::translate("QtDXSampleClass", "QtDXSample", 0));
        actionPlayPause->setText(QApplication::translate("QtDXSampleClass", "PlayPause", 0));
#ifndef QT_NO_TOOLTIP
        actionPlayPause->setToolTip(QApplication::translate("QtDXSampleClass", "Start/Pause Animation", 0));
#endif // QT_NO_TOOLTIP
        actionPlayPause->setShortcut(QApplication::translate("QtDXSampleClass", "Ctrl+P", 0));
        actionQuit->setText(QApplication::translate("QtDXSampleClass", "Quit", 0));
        menu_File->setTitle(QApplication::translate("QtDXSampleClass", "&File", 0));
        paramWidget->setWindowTitle(QApplication::translate("QtDXSampleClass", "Parameters", 0));
    } // retranslateUi

};

namespace Ui {
    class QtDXSampleClass: public Ui_QtDXSampleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDXSAMPLE_H
