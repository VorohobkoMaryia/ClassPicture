#include "Triangle.h"
Triangle::Triangle() : Picture()
{
    ReadFromConsoleT();
}

Triangle::Triangle(string aColour, string aBorderColour, double aLineThickness, double aPerimeter, double aSquare) : Picture(aColour, aBorderColour, aLineThickness, aPerimeter)
{

    SetSquare(aSquare);
}



void Triangle::SetSquare(double aSquare)
{

    Square = aSquare;
}

double Triangle::GetSquare() const
{
    return Square;
}

ostream& operator<<(ostream& out, const Triangle& value)
{
    out << (const Picture&)value << " Square: " << value.GetSquare() << "\n";
    return out;
}
void Triangle::ReadFromConsole()
{
    Picture::ReadFromConsole();
    ReadFromConsoleT();
}

void Triangle::ReadFromConsoleT()
{
    double t;
    cout << "Square: ";
   
        cin >> t;
        try {
            SetSquare(t);
            ;
        }
        catch (...) {
            cout << "strange square\n";
        }
        cin.ignore();
    
}
void Triangle::draw() const
{
    cout << "We brought to the canvas triangle";
    Picture::draw();
    cout << ", square: " << GetSquare() << "\n";
}