#include <iostream>
#include <string>
#include <cstring>
#include "packaging.h"

using namespace std;

int main()
{
    //below the user is prompter for a model # followed by the dimensions for length, width, and height
    string DW;
    string DH;
    string DL;
    double DimL;
    double DimW;
    double DimH;
    string Mnum;
    string answer;
    string prompt = "Incorrect input... enter yes or no if the Cabinet is Padded Van?";

    cout << endl << "please enter the Model number of the cabinet" << endl << endl;
    cin >> Mnum;




    while(Mnum != "591" and Mnum != "592" and Mnum != "593" and Mnum != "594" and Mnum != "595" and Mnum != "5531" and Mnum != "5536" and Mnum != "5543" and Mnum != "5544" and Mnum != "5580" and Mnum != "5632" and Mnum != "5730" and Mnum != "5731" and Mnum != "5732" and Mnum != "5744")
    {
       cout << endl << "Incorrect input... enter the Model number of the cabinet" << endl;
       cin >> Mnum;
    }

    prompt = "enter yes or no if the Cabinet is Padded Van?";
    cout << endl << prompt <<endl <<endl;
    cin >> answer;

YesorNO(prompt, answer);



    if(answer == "yes" or answer == "y")
    {
        cout << "enter yes or no if the cabinet is shipping with a pallet?" << endl << endl;
        cin >> answer;
        prompt = "Incorrect input... enter yes or no if the cabinet is shipping with a pallet?";
        YesorNO(prompt, answer);

    }



    if(answer == "yes" or answer == "y")
    {

    }

    cout << "please enter the longest segment of the cabinet"<< endl << endl;
    cin >> DL;
    while(check(DL) == false)
    {
        cout << "Incorrect input... please enter the longest segment of the cabinet"<< endl << endl;
        cin >> DL;
    }

    cout << endl << "please enter the widest segment of the cabinet" << endl << endl;
    cin >> DW;

    while(check(DW) == false)
    {
        cout << endl << "Incorrect input... please enter the widest segment of the cabinet" << endl << endl;
        cin >> DW;
    }

    cout << endl <<"please enter the highest segment of the cabinet" << endl << endl;
    cin >> DH;

    while(check(DH) == false)
    {
    cout << endl <<"Incorrect input... please enter the highest segment of the cabinet" << endl << endl;
    cin >> DH;

    }

   DimL = stod(DL);
   DimW = stod(DW);
   DimH = stod(DH);


   Dimensions Top(DimL, DimW, 1);
   Dimensions Bottom(DimL, DimW, 1);
   Dimensions Tube(DimL, DimW, DimH);
   Dimensions pallet;











}
