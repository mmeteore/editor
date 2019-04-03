/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOuvrir;
    QAction *actionNouveau;
    QAction *sauvegarder;
    QAction *action_sauvegader_sous;
    QAction *actionImprimer;
    QAction *actionFermer;
    QAction *actionTout_fermer;
    QAction *actionQuitter;
    QAction *actionCopier;
    QAction *actionColler;
    QAction *actionCouper;
    QAction *actionAnnuler;
    QAction *actionRefaire;
    QAction *actionTout_s_l_ctionner;
    QAction *actionChnager_de_couleur_de_texte;
    QAction *actionChanger_de_couleur_de_fond_de_texte;
    QAction *actionChnager_la_couleur_de_fond;
    QAction *actionTaille_de_lettre;
    QAction *actionPolice;
    QAction *actionFormat_A4;
    QAction *actionFormat_A3;
    QAction *actionFormat_brut;
    QAction *actionUne_image;
    QAction *actionUn_texte_txt;
    QAction *actionAutre;
    QAction *actionSobre;
    QAction *action_b_ne;
    QAction *actionNormal;
    QWidget *centralWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QFontComboBox *fontComboBox;
    QSlider *horizontalSlider_;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QSlider *horizontalSlider_2;
    QPushButton *pushButton_9;
    QSpinBox *spinBox;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEditer;
    QMenu *menuPersonnaliser;
    QMenu *menuMise_en_page;
    QMenu *menuIns_rer;
    QMenu *menuStyle;
    QToolBar *mainToolBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1305, 700);
        actionOuvrir = new QAction(MainWindow);
        actionOuvrir->setObjectName(QStringLiteral("actionOuvrir"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOuvrir->setIcon(icon);
        actionNouveau = new QAction(MainWindow);
        actionNouveau->setObjectName(QStringLiteral("actionNouveau"));
        sauvegarder = new QAction(MainWindow);
        sauvegarder->setObjectName(QStringLiteral("sauvegarder"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        sauvegarder->setIcon(icon1);
        action_sauvegader_sous = new QAction(MainWindow);
        action_sauvegader_sous->setObjectName(QStringLiteral("action_sauvegader_sous"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_sauvegader_sous->setIcon(icon2);
        actionImprimer = new QAction(MainWindow);
        actionImprimer->setObjectName(QStringLiteral("actionImprimer"));
        actionFermer = new QAction(MainWindow);
        actionFermer->setObjectName(QStringLiteral("actionFermer"));
        actionTout_fermer = new QAction(MainWindow);
        actionTout_fermer->setObjectName(QStringLiteral("actionTout_fermer"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        actionCopier = new QAction(MainWindow);
        actionCopier->setObjectName(QStringLiteral("actionCopier"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/copy.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopier->setIcon(icon3);
        actionColler = new QAction(MainWindow);
        actionColler->setObjectName(QStringLiteral("actionColler"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/paste.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionColler->setIcon(icon4);
        actionCouper = new QAction(MainWindow);
        actionCouper->setObjectName(QStringLiteral("actionCouper"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/cut.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCouper->setIcon(icon5);
        actionAnnuler = new QAction(MainWindow);
        actionAnnuler->setObjectName(QStringLiteral("actionAnnuler"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAnnuler->setIcon(icon6);
        actionRefaire = new QAction(MainWindow);
        actionRefaire->setObjectName(QStringLiteral("actionRefaire"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefaire->setIcon(icon7);
        actionTout_s_l_ctionner = new QAction(MainWindow);
        actionTout_s_l_ctionner->setObjectName(QStringLiteral("actionTout_s_l_ctionner"));
        actionChnager_de_couleur_de_texte = new QAction(MainWindow);
        actionChnager_de_couleur_de_texte->setObjectName(QStringLiteral("actionChnager_de_couleur_de_texte"));
        actionChanger_de_couleur_de_fond_de_texte = new QAction(MainWindow);
        actionChanger_de_couleur_de_fond_de_texte->setObjectName(QStringLiteral("actionChanger_de_couleur_de_fond_de_texte"));
        actionChnager_la_couleur_de_fond = new QAction(MainWindow);
        actionChnager_la_couleur_de_fond->setObjectName(QStringLiteral("actionChnager_la_couleur_de_fond"));
        actionTaille_de_lettre = new QAction(MainWindow);
        actionTaille_de_lettre->setObjectName(QStringLiteral("actionTaille_de_lettre"));
        actionPolice = new QAction(MainWindow);
        actionPolice->setObjectName(QStringLiteral("actionPolice"));
        actionFormat_A4 = new QAction(MainWindow);
        actionFormat_A4->setObjectName(QStringLiteral("actionFormat_A4"));
        actionFormat_A3 = new QAction(MainWindow);
        actionFormat_A3->setObjectName(QStringLiteral("actionFormat_A3"));
        actionFormat_brut = new QAction(MainWindow);
        actionFormat_brut->setObjectName(QStringLiteral("actionFormat_brut"));
        actionUne_image = new QAction(MainWindow);
        actionUne_image->setObjectName(QStringLiteral("actionUne_image"));
        actionUn_texte_txt = new QAction(MainWindow);
        actionUn_texte_txt->setObjectName(QStringLiteral("actionUn_texte_txt"));
        actionAutre = new QAction(MainWindow);
        actionAutre->setObjectName(QStringLiteral("actionAutre"));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        action_b_ne = new QAction(MainWindow);
        action_b_ne->setObjectName(QStringLiteral("action_b_ne"));
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QStringLiteral("actionNormal"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 10, 31, 16));
        pushButton_2->setStyleSheet(QLatin1String("  background-color:green;\n"
"    font-family: freemono;\n"
"	    border: 3PX black;\n"
"    border-style: ridge;\n"
"	"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 10, 31, 16));
        QFont font;
        font.setFamily(QStringLiteral("freemono"));
        font.setItalic(true);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("  background-color:green;\n"
"    font-family: freemono;\n"
"	    border: 3PX black;\n"
"    border-style: ridge;\n"
"	"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(200, 10, 31, 18));
        pushButton_7->setStyleSheet(QLatin1String("  background-color:green;\n"
"    font-family: freemono;\n"
"border:3px white;\n"
"	      border-style: ridge;\n"
"	"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 10, 31, 18));
        pushButton_6->setStyleSheet(QLatin1String("  background-color:green;\n"
"    font-family: freemono;\n"
"border:3px white;\n"
"	      border-style: ridge;\n"
"	"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 10, 31, 18));
        pushButton_5->setStyleSheet(QLatin1String("  background-color:green;\n"
"    font-family: freemono;\n"
"border:3px white;\n"
"	      border-style: ridge;\n"
"	"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 10, 31, 18));
        QFont font1;
        font1.setFamily(QStringLiteral("freemono"));
        font1.setUnderline(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("  background-color:green;\n"
"    font-family: freemono;\n"
"	    border: 3PX black;\n"
"    border-style: ridge;\n"
"	"));
        fontComboBox = new QFontComboBox(centralWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(240, 6, 170, 20));
        horizontalSlider_ = new QSlider(centralWidget);
        horizontalSlider_->setObjectName(QStringLiteral("horizontalSlider_"));
        horizontalSlider_->setGeometry(QRect(1080, 780, 100, 17));
        horizontalSlider_->setOrientation(Qt::Horizontal);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(420, 5, 41, 21));
        pushButton_4->setStyleSheet(QStringLiteral("color:red;"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(470, 6, 41, 20));
        pushButton_8->setStyleSheet(QLatin1String("background-color:blue;\n"
"color:white;"));
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(1210, 610, 91, 20));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(520, 5, 51, 21));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(580, 6, 41, 20));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(120, 30, 1071, 771));
        textEdit->setStyleSheet(QStringLiteral(""));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1305, 19));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuEditer = new QMenu(menuBar);
        menuEditer->setObjectName(QStringLiteral("menuEditer"));
        menuPersonnaliser = new QMenu(menuEditer);
        menuPersonnaliser->setObjectName(QStringLiteral("menuPersonnaliser"));
        menuMise_en_page = new QMenu(menuBar);
        menuMise_en_page->setObjectName(QStringLiteral("menuMise_en_page"));
        menuIns_rer = new QMenu(menuBar);
        menuIns_rer->setObjectName(QStringLiteral("menuIns_rer"));
        menuStyle = new QMenu(menuBar);
        menuStyle->setObjectName(QStringLiteral("menuStyle"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEditer->menuAction());
        menuBar->addAction(menuMise_en_page->menuAction());
        menuBar->addAction(menuIns_rer->menuAction());
        menuBar->addAction(menuStyle->menuAction());
        menuFichier->addAction(actionOuvrir);
        menuFichier->addAction(actionNouveau);
        menuFichier->addSeparator();
        menuFichier->addAction(sauvegarder);
        menuFichier->addAction(action_sauvegader_sous);
        menuFichier->addSeparator();
        menuFichier->addAction(actionImprimer);
        menuFichier->addSeparator();
        menuFichier->addAction(actionFermer);
        menuFichier->addAction(actionTout_fermer);
        menuFichier->addAction(actionQuitter);
        menuEditer->addAction(actionCopier);
        menuEditer->addAction(actionColler);
        menuEditer->addAction(actionCouper);
        menuEditer->addSeparator();
        menuEditer->addAction(actionAnnuler);
        menuEditer->addAction(actionRefaire);
        menuEditer->addSeparator();
        menuEditer->addAction(actionTout_s_l_ctionner);
        menuEditer->addSeparator();
        menuEditer->addAction(menuPersonnaliser->menuAction());
        menuPersonnaliser->addAction(actionChnager_de_couleur_de_texte);
        menuPersonnaliser->addAction(actionChanger_de_couleur_de_fond_de_texte);
        menuPersonnaliser->addAction(actionChnager_la_couleur_de_fond);
        menuPersonnaliser->addSeparator();
        menuPersonnaliser->addAction(actionTaille_de_lettre);
        menuPersonnaliser->addAction(actionPolice);
        menuMise_en_page->addAction(actionFormat_A4);
        menuMise_en_page->addAction(actionFormat_A3);
        menuMise_en_page->addAction(actionFormat_brut);
        menuIns_rer->addAction(actionUne_image);
        menuIns_rer->addAction(actionUn_texte_txt);
        menuIns_rer->addAction(actionAutre);
        menuStyle->addAction(actionSobre);
        menuStyle->addAction(action_b_ne);
        menuStyle->addAction(actionNormal);
        mainToolBar->addAction(actionOuvrir);
        mainToolBar->addSeparator();
        mainToolBar->addAction(sauvegarder);
        mainToolBar->addAction(action_sauvegader_sous);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCopier);
        mainToolBar->addAction(actionColler);
        mainToolBar->addAction(actionCouper);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAnnuler);
        mainToolBar->addAction(actionRefaire);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOuvrir->setText(QApplication::translate("MainWindow", "Ouvrir", 0));
        actionOuvrir->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionNouveau->setText(QApplication::translate("MainWindow", "Nouveau", 0));
        actionNouveau->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+N", 0));
        sauvegarder->setText(QApplication::translate("MainWindow", "Sauvegarder", 0));
        sauvegarder->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        action_sauvegader_sous->setText(QApplication::translate("MainWindow", "sauvegarder sous", 0));
        action_sauvegader_sous->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0));
        actionImprimer->setText(QApplication::translate("MainWindow", "Imprimer", 0));
        actionImprimer->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionFermer->setText(QApplication::translate("MainWindow", "Fermer", 0));
        actionFermer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+F", 0));
        actionTout_fermer->setText(QApplication::translate("MainWindow", "Tout fermer", 0));
        actionTout_fermer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+F", 0));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0));
        actionCopier->setText(QApplication::translate("MainWindow", "Copier", 0));
        actionCopier->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionColler->setText(QApplication::translate("MainWindow", "Coller", 0));
        actionColler->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        actionCouper->setText(QApplication::translate("MainWindow", "Couper", 0));
        actionCouper->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        actionAnnuler->setText(QApplication::translate("MainWindow", "Annuler", 0));
        actionAnnuler->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionRefaire->setText(QApplication::translate("MainWindow", "Refaire", 0));
        actionRefaire->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0));
        actionTout_s_l_ctionner->setText(QApplication::translate("MainWindow", "Tout s\303\251l\303\251ctionner", 0));
        actionTout_s_l_ctionner->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionChnager_de_couleur_de_texte->setText(QApplication::translate("MainWindow", "Chnager de couleur de texte", 0));
        actionChanger_de_couleur_de_fond_de_texte->setText(QApplication::translate("MainWindow", "Changer de couleur de fond de texte", 0));
        actionChnager_la_couleur_de_fond->setText(QApplication::translate("MainWindow", "Chnager la couleur de fond", 0));
        actionTaille_de_lettre->setText(QApplication::translate("MainWindow", "Taille de lettre", 0));
        actionPolice->setText(QApplication::translate("MainWindow", "Police", 0));
        actionFormat_A4->setText(QApplication::translate("MainWindow", "Format A4", 0));
        actionFormat_A3->setText(QApplication::translate("MainWindow", "Format A3", 0));
        actionFormat_brut->setText(QApplication::translate("MainWindow", "Format brut", 0));
        actionUne_image->setText(QApplication::translate("MainWindow", "Une image", 0));
        actionUn_texte_txt->setText(QApplication::translate("MainWindow", "Un texte (.txt)", 0));
        actionAutre->setText(QApplication::translate("MainWindow", "Autre", 0));
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", 0));
        action_b_ne->setText(QApplication::translate("MainWindow", "\303\211b\303\250ne", 0));
        actionNormal->setText(QApplication::translate("MainWindow", "Normal", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "G", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "I", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "I", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "G", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "S", 0));
        pushButton->setText(QApplication::translate("MainWindow", "S", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "A", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "A", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "texte", 0));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:100px; margin-bottom:0px; margin-left:100px; margin-right:100px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
        menuEditer->setTitle(QApplication::translate("MainWindow", "Editer", 0));
        menuPersonnaliser->setTitle(QApplication::translate("MainWindow", "Personnaliser", 0));
        menuMise_en_page->setTitle(QApplication::translate("MainWindow", "Mise en page", 0));
        menuIns_rer->setTitle(QApplication::translate("MainWindow", "Ins\303\251rer", 0));
        menuStyle->setTitle(QApplication::translate("MainWindow", "Style", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
