#pragma once
#include <string>
#include <iostream>
#include "Picture.h"
using namespace std;
class Circle:public Picture
{
public:
    Circle();
    Circle(string aColour, string aBorderColour, double aLineThickness, double aPerimeter,double aRadius);
    void SetRadius(double aRadius);
    double GetRadius() const;
    void ReadFromConsole() override;
    virtual void draw()  const override;
private:
    
    double Radius;
    void ReadFromConsoleC();

    friend ostream& operator << (ostream& out, const Circle& va);
};

