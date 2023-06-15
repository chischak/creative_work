#ifndef commisvoyageur_h
#define commisvoyageur_h

#include <QBrush>
#include <QFont>
#include <QPen>
#include <QWidget>

class Draw
{
public:
    Draw();

public:
    void draw(QPainter* draw, QPaintEvent* event);
    void draw_vertex(int x, int y, QPainter* draw, QString name);
    void draw_edge(int x1, int y1, int x2, int y2, QPainter* draw, int weight, int type);
    QBrush shape;

private:
    QFont font;
    QBrush background;
    QPen textP;
};

#endif // commisvoyageur_h
