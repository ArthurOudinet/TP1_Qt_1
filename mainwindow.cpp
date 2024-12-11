#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clickTension = false;
    ui->EtatTension->setText("Hors Tension");
    ui->EtatTension->setEnabled(true);
    ui->MiseSousTension->setText("Mise sous tension");
    ui->MiseSousTension->setEnabled(true);
    ui->DemarrageDrone->setEnabled(false);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_MiseSousTension_clicked()
{
    if (!clickTension) {
        // État 1 : En tension
        ui->EtatTension->setText("En tension");
        ui->EtatTension->setEnabled(false);
        ui->EtatTension->setDisabled(true);
        clickTension = true;
        ui->DemarrageDrone->setEnabled(true);
    } else {
        // État 2 : A l'arrêt
        ui->EtatTension->setText("A l'arrêt");
        ui->EtatTension->setEnabled(true);
        clickTension = false;
    }
}
