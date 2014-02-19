#ifndef FRACTALE_H
#define FRACTALE_H

#include <QWidget>
#include <QPixmap>
#include <QApplication>
#include <QImage>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QPainter>
#include <QPen>
#include <vector>

using std::vector;
class fractale: public QWidget
{
    Q_OBJECT
public:
    explicit fractale(QWidget *parent = 0);
    QPixmap getPixmap();
    void colorieMandelbrot();
    void colorieJulia(double,double);
    void colorieBuddha();
signals:

public slots:

private:
    static const int m_largeur=1200;
    static const int m_longueur=1200;
    QPixmap m_pixmap;
};

vector<vector<int> > Mandelbrot(int iteration_max, int a[], int c[]);
vector<vector<int> > Buddhabrot(int iteration_max,int a[], int c[]);

#endif // FRACTALE_H
