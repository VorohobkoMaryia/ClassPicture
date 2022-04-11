#pragma once
#include <string>
#include <iostream>
#include "Picture.h"
using namespace std;
class Triangle:public Picture
{
public:
    Triangle();
    Triangle(string aColour, string aBorderColour, double aLineThickness, double aPerimeter, double aSquare);
    void SetSquare(double aSquare);
    double GetSquare() const;
    void ReadFromConsole() override;
    virtual void draw()  const override;
private:
    double Square;
    void ReadFromConsoleT();

    friend ostream& operator << (ostream& out, const Triangle& ca);
};

