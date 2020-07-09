//Chapter 3
//In this lab we will take user input and assign those values to our variables, that will be used to perform advanced calculations.
//Be aware of Operator Precedence and rules of Associativity to arrive at correct results.
//Introduce and use the C++ math library.
//Let's continue developing our IsoscelesTriangle.cpp to incorporate the 
//concepts of taking String datatype as input from the user and formatting our output to look nice.

//Assignment 4
///Purpose: Calculate the area and perimeter of an isoceles triangle given by base and height variables input by user via the console. 
///Input: base, height
///Process: Calcluate the length of the triangle. Calculate the area and perimter
///Output: Display a message showing the area and peirmeter of the isoceles triangle

//psuedocode

#include <iostream>
#include <string>
#include <cmath> //required directive for c++ math library
#include <iomanip>
using namespace std;

int main()
{
    //delcare program purpose
    cout << "This program calculates the area and perimeter of three isoceles triangles with units in meters\n";

    //Get first triangle name, base and height
    string triangle1;
    double base1, height1;
    cout << "Enter first triangle name\n";
    cin >> triangle1;
    cout << "Enter first triangle base and height separated by a space\n";
    cin >> base1 >> height1; 

    //calculate triangle length using pythgorean theorem
    base1 = base1 / 2;
    double length1 = sqrt(pow((base1), 2.0) + pow(height1, 2.0));

    //calculate area of triangle
    double area1 = (base1 * height1);

    //calculate perimeter of triangle
    double perimeter1 = length1 + base1 + height1;

    //Get second triangle name, base and height
    string triangle2;
    double base2, height2;
    cout << "Enter second triangle name\n";
    cin >> triangle2;
    cout << "Enter second triangle base and height separated by a space\n";
    cin >> base2 >> height2; 

    //calculate triangle length using pythgorean theorem
    base1 = base2 / 2;
    double length2 = sqrt(pow((base2), 2.0) + pow(height2, 2.0));

    //calculate area of triangle
    double area2 = (base2 * height2);

    //calculate perimeter of triangle
    double perimeter2 = length2 + base2 + height2;

    //Get third triangle name, base and height
    string triangle3;
    double base3, height3;
    cout << "Enter third triangle name:\n";
    cin >> triangle3;
    cout << "Enter third triangle base and height separated by a space:\n";
    cin >> base3 >> height3; 

    //calculate triangle length using pythgorean theorem
    base3 = base3 / 2;
    double length3 = sqrt(pow((base3), 2.0) + pow(height3, 2.0));

    //calculate area of triangle
    double area3 = (base3 * height3);

    //calculate perimeter of triangle
    double perimeter3 = length3 + base3 + height3;
    
    //Display formatted column output of triangle data with each column width equal to as many spaces as characters in largest output string plus one space to ease reading.
    int cw = 16;
    cout << setprecision(4) << fixed;    //set precision/fixed manipulator to format numbers to 4 decimal places.
    cout << setw(cw) << "Name" << setw(cw) << "Base" << setw(cw) << "Height" << setw(cw) << "Area" << setw(cw) << "Perimeter" << "\n";
    cout << setw(cw) << triangle1 << setw(cw) << base1*2 << setw(cw) << height1 << setw(cw) << area1 << setw(cw) << perimeter1 << "\n"; //base multiplied to return entered parameter
    cout << setw(cw) << triangle2 << setw(cw) << base2*2 << setw(cw) << height2 << setw(cw) << area2 << setw(cw) << perimeter2 << "\n"; //setw() should be included before any output object so set the width of the field that object will be printed in
    cout << setw(cw) << triangle3 << setw(cw) << base3*2 << setw(cw) << height3 << setw(cw) << area3 << setw(cw) << perimeter3 << "\n";
return 0;   
}


