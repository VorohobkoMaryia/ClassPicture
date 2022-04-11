#include "Line.h"
Line::Line() : Picture()
{
    ReadFromConsoleL();
}

Line::Line(string aColour, string aBorderColour, double aLineThickness, double aPerimeter,double aLength) : Picture(aColour, aBorderColour, aLineThickness, aPerimeter)
{

    SetLength(aLength);
}



void Line::SetLength(double aLength)
{

    Length = aLength;
}

double Line::GetLength() const
{
    return Length;
}

ostream& operator<<(ostream& out, const Line& value)
{
    out << (const Picture&)value << " Length: " << value.GetLength() << "\n";
    return out;
}
void Line::ReadFromConsole()
{
    Picture::ReadFromConsole();
    ReadFromConsoleL();
}

void Line::ReadFromConsoleL()
{
    double t;
    cout << "Length: ";
   
        cin >> t;
        try {
            SetLength(t);
        }
        catch (...) {
            cout << "strange length\n";
      }
        cin.ignore();
}
void Line::draw() const
{
    cout << "We brought to the canvas line";
    Picture::draw();
    cout<< ", length: " << GetLength() << endl;
}