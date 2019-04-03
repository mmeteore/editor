#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFontComboBox>
#include <QFont>
#include <QFontDialog>
#include <QColor>
#include <QColorDialog>
#include <QPageSize>
#include <QtPrintSupport/QPrinter>
#include <QString>
#include <QTextCursor>
#include <QTextDocumentWriter>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QTextDocument>
#include <QString>
#include <QSizeF>
#include <QMarginsF>
#include <QPageSize>
#include <QTextEdit>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;


private slots:
    void on_actionPolice_triggered();



    void on_actionChanger_de_couleur_de_fond_de_texte_triggered();

    void on_actionChnager_la_couleur_de_fond_triggered();

   // void on_textEdit_destroyed();

    void on_actionFormat_A4_triggered();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_horizontalSlider_2_actionTriggered(int action);

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_actionCopier_triggered();

    void on_actionColler_triggered();

    void on_actionCouper_triggered();

    void on_actionAnnuler_triggered();

    void on_actionRefaire_triggered();

    void on_actionOuvrir_triggered();

    void on_sauvegarder_triggered();

    void on_action_sauvegader_sous_triggered();

    void on_actionImprimer_triggered();

    void on_actionNouveau_triggered();

    void on_spinBox_editingFinished();

    void on_textEdit_destroyed();

   // void on_textBrowser_destroyed();

    void on_actionUne_image_triggered();


    void on_pushButton_10_clicked();

private:

    QString mFileName;
    QString text;
    QTextDocument *m_textEdit;


};


#endif // MAINWINDOW_H
