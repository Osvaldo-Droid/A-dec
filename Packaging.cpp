#include "packaging.h"
#include <string>
#include<iostream>
#include <cstring>


using namespace std;


Dimensions::Dimensions()
{
    length = 0;
    width =0;
    height = 0;
}

Dimensions::Dimensions(const double L, const double W,const double H)
{
    length = L;
    width = W;
    height = H;
}

Cabinet::Cabinet(int Mnum, Dimensions cabinet)
{
    if(Mnum == 591)
    {

    }
}

Packaging::Packaging(const Dimensions B,const Dimensions T,const Dimensions TU,const Dimensions P)
{
    bottom = B;
    top = T;
    tube = TU;
    pallet = P;

}

bool check(string& num)
{
    for(int i = 0; i < num.length(); i++)
    {
        if(isdigit(num[i]) == false)
        {
            return false;
        }
    }
    return true;
}

void YesorNO(const string prompt, string& answer)
{

    for(int i = 0; i < answer.length(); i++)
    {
        if(answer == "yes" or answer == "y")
        {
            break;
        }
        if(answer == "no" or answer == "n")
        {
            break;
        }

        if(answer[i] != 'Y' and answer[i] != 'N' and i == 0)
        {
            cout << endl << prompt << endl << endl;
            cin >> answer;
            i = -1;
        }

        else if(isalpha(answer[i]) == true)
        {
           answer[i] = tolower(answer[i]);
        }

        else if(isdigit(answer[i]) == true)
        {
            cout << endl << prompt  << endl << endl;
            cin >> answer;
            i = -1;
        }

    }
}


