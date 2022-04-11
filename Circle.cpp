#include "Circle.h"

Circle::Circle() : Picture()
{
    ReadFromConsoleC();
}

Circle::Circle(string aColour, string aBorderColour, double aLineThickness, double aPerimeter,double aRadius) :Picture(aColour, aBorderColour, aLineThickness, aPerimeter)
{

    SetRadius(aRadius);
}



void Circle::SetRadius(double aRadius)
{

    Radius = aRadius;
}

double Circle::GetRadius() const
{
    return Radius;
}

ostream& operator<<(ostream& out, const Circle& value)
{
    out << (const Picture&)value << " Radius: " << value.GetRadius() << "\n";
    return out;
}
void Circle::ReadFromConsole()
{
    Picture::ReadFromConsole();
    ReadFromConsoleC();
}

void Circle::ReadFromConsoleC()
{
    double t;
    cout << "Radius: ";
   
        cin >> t;
        try {
            SetRadius(t);
        }
        catch (...) {
            cout << "strange radius\n";
        }
        cin.ignore();
  
}
void Circle::draw() const
{
    cout << "We brought to the canvas circle";
    Picture::draw();
    cout << ", radius: " << GetRadius() << endl;
}