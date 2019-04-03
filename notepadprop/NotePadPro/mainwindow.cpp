#include <QAbstractTextDocumentLayout>
#include <QPainter>
#include <QScrollBar>
#include <QTextFrame>
#include <QApplication>
#include <QDesktopWidget>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextDocumentWriter>
#include <QtPrintSupport/QPrinter>
#include <QString>
#include <QFile>
#include <QFileDialog>
#include <QtPrintSupport/QPrintDialog>
#include <QTextStream>
#include<QDialog>
#include <QImage>
#include <QImageReader>
#include <QLabel>
#include <QTextDocument>
#include <QTextImageFormat>
#include <QTextCursor>
#include <QVariant>
#include <QPixmap>


MainWindow:: MainWindow(QWidget *parent):
QMainWindow(parent),ui(new Ui:: MainWindow )
{

    ui->setupUi(this);
     ui->pushButton_5->setHidden(true);
     ui->pushButton_7->setHidden(true);
     ui->pushButton_6->setHidden(true);
   //  ui->textEdit->setStyleSheet("margin:100px;");

     ui->textEdit->setPlaceholderText("|_|                                                                                                                                                                                                                                                                     |_|");
     text = ui->textEdit->toPlainText();
     ui->textEdit->setText(text);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionPolice_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok,this);
    if(ok)
    {
        ui->textEdit->setFont(font);
    }
}
void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f)
{
    ui->textEdit->setCurrentFont(QFont (f));
}

void MainWindow::on_horizontalSlider_2_actionTriggered(int val)
{
    QFont police = ui->textEdit->currentFont();
   int static tailleTxt= police.pointSize();

    QFont tmpFont;

   int  vals = ui->horizontalSlider_2->value();


    if(vals > tailleTxt)
    {
        ui->textEdit->zoomIn();
        tmpFont = ui->textEdit->currentFont();
        tailleTxt = tmpFont.pointSize();
    }else{
        ui->textEdit->zoomOut();
       tmpFont = ui->textEdit->currentFont();
      tailleTxt = tmpFont.pointSize();
    }
}

void MainWindow::on_pushButton_4_clicked()
{

    QColor fontColor = QColorDialog::getColor(Qt::white,this,"Choisir une couleur de texte !");

        ui->textEdit->setTextColor(fontColor);
        ui->pushButton_4->colorCount();
}

void MainWindow::on_pushButton_8_clicked()
{
    QColor fontBackGroundColor = QColorDialog::getColor(Qt::white,this,"Choisir une couleur de fon d pour le tetxe !");
    ui->textEdit->setTextBackgroundColor(fontBackGroundColor);

}
void MainWindow::on_textEdit_destroyed()
{

   ui->textEdit->acceptDrops();
   ui->textEdit->acceptRichText();


}

void MainWindow::on_pushButton_9_clicked()
{
    bool font ;
    QFont fonts = QFontDialog::getFont(&font,this);
    if (font)
        ui->textEdit->setCurrentFont(fonts);
}

void MainWindow::on_actionCopier_triggered()
{
  	if(!file.isEmpty()) {
  		ui->textEdit->copy();
  	} else {
  		ui->textEdit->paste();
  	}

}

void MainWindow::on_actionColler_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionCouper_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionAnnuler_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRefaire_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionOuvrir_triggered()
{
    QString file = QFileDialog::getOpenFileName(this,"Ouvrir un ficher");
    if (!file.isEmpty())
     {   QFile sFile(file);
    if (sFile.open(QFile::ReadOnly |QFile::Text))
    {
       QTextStream in (&sFile);
        text = in.readAll();
       sFile.close();
       ui->textEdit->setPlainText(text);
      }
     }


}

void MainWindow::on_sauvegarder_triggered()
{
    QFile sFile(mFileName);
    if (sFile.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream out (&sFile);
        out<<ui->textEdit->toPlainText();
        sFile.flush();
        sFile.close();
    }

}

void MainWindow::on_action_sauvegader_sous_triggered()
{
    QString file =  QFileDialog::getSaveFileName(this,"");
    if (!file.isEmpty())
    {
        mFileName = file;
        on_action_sauvegader_sous_triggered();
    }

}
void MainWindow::on_actionUne_image_triggered()
{
    QString cheminImage = QFileDialog::getOpenFileName(this, tr("Sélectionner une image"),
                                                       ".", tr("JPEG (*.jpg *jpeg)\n"
                                                         "GIF (*.gif)\n"
                                                         "PNG (*.png)\n"));
    cheminImage.resize(1000);

        QString texteFinal = ui->textEdit->toHtml() + "<img src = \""+ cheminImage +"\" alt = IMAGE  \"\"/>";


         ui->textEdit->setHtml(texteFinal);

}
void MainWindow::on_actionNouveau_triggered()
{
    ui->textEdit->setText("");
}

void MainWindow::on_actionImprimer_triggered()
{
    QPrinter printer;
    printer.setPrinterName("Quelle imprimante ?");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec()==QDialog::Rejected) return;
    ui->textEdit->print(&printer);

}

void MainWindow::on_actionChanger_de_couleur_de_fond_de_texte_triggered()
{

    QColor color =  QColorDialog::getColor(Qt::white,this,"Choisir une couleur de tetxe !");

        ui->textEdit->setTextColor(color);


}

void MainWindow::on_actionChnager_la_couleur_de_fond_triggered()
{

    QColor color =  QColorDialog::getColor(Qt::white,this,"Choisir une couleur de tetxe !");
      ui->textEdit->setTextBackgroundColor(color);
}
void MainWindow::on_spinBox_editingFinished()
{
    int mini = 9;
    ui->spinBox->setMinimum(mini);
    ui->spinBox->setMaximum(50);
    ui->textEdit->setFontPointSize(ui->spinBox->value());
}


void MainWindow::on_actionFormat_A4_triggered()
{

}
//souligne
void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->setHidden(true);
    ui->textEdit->setFontUnderline(true);
    ui->pushButton_5->setHidden(false);

}
void MainWindow::on_pushButton_5_clicked()
{
    ui->pushButton->setHidden(false);
    ui->pushButton_5->setHidden(true);
     ui->textEdit->setFontUnderline(false);

}
//italic
void MainWindow::on_pushButton_3_clicked()
{
    ui->textEdit->setFontItalic(true);
    ui->pushButton_7->setHidden(false);
     ui->pushButton_3->setHidden(true);

}
void MainWindow::on_pushButton_7_clicked()
{
    ui->textEdit->setFontItalic(false);
    ui->pushButton_7->setHidden(true);
    ui->pushButton_3->setHidden(false);

}

//mise en gras
void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton_2->setHidden(true);
    ui->pushButton_6->setHidden(false);
}
void MainWindow::on_pushButton_6_clicked()
{
    ui->pushButton_2->setHidden(false);
    ui->pushButton_6->setHidden(true);

}


void MainWindow::on_pushButton_10_clicked()
{
    ui->textEdit->setFontPointSize(17);
}
