#pragma once
#include <string>
#include <iostream>
using namespace std;
enum class FigureType 
{
    TRIANGLE,
    LINE,
    CIRCLE
};
class Picture
{
public:
    Picture(string aColour, string aBorderColour,double aLineThickness,double aPerimeter);
    Picture();
    void setColour(string aColour);
    void setBorderColour(string aBorderColour);
    void setLineThickness(double aLineThickness);
    void setPerimeter(double aPerimeter);
    string  getColour() const;
    string  getBorderColour() const;
    double getLineThickness() const;
    double getPerimeter() const;
    unsigned getID() const;
    virtual void ReadFromConsole();
    static Picture* CreateFigure(enum class FigureType);
    virtual void draw() const = 0;

protected:
    unsigned ID;
    string Colour;
    string BorderColour;
    double LineThickness;
    double Perimeter;
    static unsigned nextID;
    friend ostream& operator << (ostream& out, const Picture& a);
};

