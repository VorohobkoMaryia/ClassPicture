#pragma once
#include "Picture.h"
#include <vector>
class TotalPerimeter
{
    public:
       
        TotalPerimeter(double aPerimetrs);
        double getPerimeters() const;
        void addFigure(Picture* a);
    private:
        double Perimetrs;
        vector <Picture*> figures;
};

