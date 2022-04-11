#include "Picture.h"
#include "Circle.h"
#include "Line.h"
#include "Triangle.h"
#include <cassert>
unsigned Picture::nextID = 0;

Picture* Picture::CreateFigure(FigureType figure)
{
    Picture* FIGURE = nullptr;
    switch (figure) {
    case FigureType::TRIANGLE:
        FIGURE = new Triangle();
        break;
    case FigureType::LINE:
        FIGURE = new Line();
        break;
    case FigureType::CIRCLE:
        FIGURE = new Circle();
        break;
    default:
        assert(false);
    }
    return FIGURE;
}

Picture::Picture(string aColour, string aBorderColour, double aLineThickness,double aPerimeter) : ID(nextID++)
{
    setColour(aColour);
    setBorderColour(aBorderColour);
    setLineThickness(aLineThickness);
    setPerimeter(aPerimeter);
}

void Picture::setColour(string aColour)
{
    Colour = aColour;
}
void Picture::setPerimeter(double aPerimeter)
{
    Perimeter = aPerimeter;
}

void Picture::setBorderColour(string aBorderColour)
{

    BorderColour = aBorderColour;
}

void Picture::setLineThickness(double aLineThickness)
{

    LineThickness = aLineThickness;
}
string Picture::getColour() const
{
    return Colour;
}
string Picture::getBorderColour() const
{
    return BorderColour;
}

double Picture::getLineThickness() const
{
    return LineThickness;
}
double Picture::getPerimeter() const
{
    return Perimeter;
}


Picture::Picture() : ID(nextID++)
{
    ReadFromConsole();
}

unsigned Picture::getID() const
{
    return ID;
}

void Picture::ReadFromConsole()
{
    double thick;
    string colour;
    cout << "Enter the colour: ";
    getline(cin, colour);
    setColour(colour);
    cout << "Enter the border colour: ";
    getline(cin, colour);
    setBorderColour(colour);
    cout << "Enter the line thickness: ";
        cin >> thick;
        try
        {
            setLineThickness(thick);
        }
        catch (...) {
            cout << "strange line thickness";
        }
    cout << "Enter the perimetr: ";
    cin >> thick;
        try
        {
            setPerimeter(thick);
          
        }
        catch (...) {
            cout << "strange perimetr";
        }
}

ostream& operator<<(ostream& out, const Picture& value)
{
    out << "Figure ID: " << value.getID() << " Colour: " << value.getColour() << " Border Colour: " << value.getBorderColour() << " Line Thickness: " << value.getLineThickness() << " Perimeter: " << value.getPerimeter() << "\n";
    return out;
}
void Picture::draw() const
{
    cout << ", colour:"<<  getColour() << ", border colour: " << getBorderColour() << ", line thickness: " << getLineThickness()<< ", perimeter: "<< getPerimeter();
}
