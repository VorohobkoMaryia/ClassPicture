#include "TotalPerimeter.h"

TotalPerimeter::TotalPerimeter(double aPerimetrs)
{
    Perimetrs = aPerimetrs;
}

double TotalPerimeter::getPerimeters() const
{
    double perimetr = Perimetrs;
    for (auto x : figures)
        perimetr += x->getPerimeter();
    return perimetr;
}

void TotalPerimeter::addFigure(Picture* a)
{
    for (auto x : figures) 
    {
        if (x->getID() == a->getID())
            throw runtime_error("error");
    }
    figures.push_back(a);
}
