#include "Picture.h"
#include "Circle.h"
#include "Line.h"
#include "Triangle.h"
#include "TotalPerimeter.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<Picture*> shapes;
    cout << "Data input"<<endl;
    Line tmp1("red", "black", 5.6, 7, 8);
    Triangle tmp2("pink", "white", 7, 21, 3);
    Circle tmp3("green", "black", 1, 0.5, 2);
    tmp3.setBorderColour("blue");
    shapes.push_back(&tmp1);
    shapes.push_back(&tmp2);
    shapes.push_back(&tmp3);
    shapes.push_back(Picture::CreateFigure(FigureType::LINE));
    shapes.push_back(Picture::CreateFigure(FigureType::CIRCLE));
    shapes.push_back(Picture::CreateFigure(FigureType::TRIANGLE));
    cout << "Our drawing "<< endl;
    for (auto iter = shapes.begin(); iter != shapes.end(); iter++)
    {
        (*iter)->draw();
    }
    cout << "Find the total perimeter" << endl;
    TotalPerimeter sumperimetr(0);
    sumperimetr.addFigure(shapes[0]);
    sumperimetr.addFigure(shapes[1]);
    sumperimetr.addFigure(shapes[2]);
    cout << "The sum of the perimeters  = "<<sumperimetr.getPerimeters() << endl;
    return 0;
   
}

