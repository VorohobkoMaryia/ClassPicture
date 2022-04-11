#include <string>
#include "Picture.h"
#include <iostream>
using namespace std;
class Line: public Picture
{
public:
    Line();
    Line(string aColour, string aBorderColour, double aLineThickness, double aPerimeter,double aLength);
    void SetLength(double aLength);
    double GetLength() const;
    void ReadFromConsole() override;
    virtual void draw()  const override;
private:
    double Length;
    void ReadFromConsoleL();

    friend ostream& operator << (ostream& out, const Line& va);
};
