#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  // Crée l'objet application
    MainWindow w;                // Crée l'objet fenêtre principale
    w.show();                    // Affiche la fenêtre principale
    return a.exec();             // Démarre la boucle d'événements de l'application
}
