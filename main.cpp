#include <QApplication>
#include <QImage>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QPixmap>
#include <QPainter>
#include <QPen>
#include <vector>
#include <array>
#include "fractale.h"
#include "matrice.cpp"
#include <iostream>
using namespace std;
using std::vector;

int main (int argc, char *argv[])
{
    QApplication app(argc, argv);
    int a[2];
    int c[2];
    a[0]=300;
    a[1]=300;
    c[0]=600;
    c[1]=600;
    vector<vector<int> > resultat;
    resultat = Mandelbrot(100,a,c);
    int s1 = resultat.size();
    int b=resultat[9][1];
    cout <<b <<endl;
    system("PAUSE");
    return 0;
}
