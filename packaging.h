#ifndef PACKAGING_H
#define PACKAGING_H

#include <string>
#include<iostream>

using namespace std;

class Dimensions
{
private:
    double length;
    double width;
    double height;

public:
    Dimensions();
    Dimensions(const double L, const double W, const double H);
};

class Cabinet
{
private:
    Dimensions Cab;
    int ModelNumber;

public:
    Cabinet();
    Cabinet(const int Mnum, const Dimensions Cabinet);


};


class Packaging
{

private:
    Dimensions bottom;
    Dimensions top;
    Dimensions tube;
    Dimensions pallet;


public:
    Packaging();
    Packaging(const Dimensions B,const Dimensions T,const Dimensions TU,const Dimensions P);

};

bool check(string& num);
void YesorNO(const string prompt, string& answer);

template <class T>
bool check(T num)
{
    if(!isdigit(num))
    {
        return false;
    }
    else
        return true;
}


#endif // PACKAGING_H
