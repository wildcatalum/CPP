//Chapter 3
//In this lab we will take user input and assign those values to our variables, that will be used to perform advanced calculations.
//Be aware of Operator Precedence and rules of Associativity to arrive at correct results.
//Introduce and use the C++ math library.
//Let's continue developing our IsoscelesTriangle.cpp to incorporate the 
//concepts of taking String datatype as input from the user and formatting our output to look nice.

//Assignment 4 - 
///Purpose: Calculate the area and perimeter of an isoceles triangle given by base and height variables input by user via the console. 
///Input: base, height
///Process: Calcluate the length of the triangle. Calculate the area and perimter
///Output: Display a message showing the area and peirmeter of the isoceles triangle

//psuedocode

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    //delcare program purpose
    cout << "This program calculates the area and perimeter of an isoceles triangle in meters\n";

    //get triangle base and height
    double base, height;
    cout << "Enter triangle base and height separated by a space\n";
    cin >> base >> height; 

    //calculate triangle length using pythgorean theorem
    base = base / 2;
    double length = sqrt(pow((base), 2.0) + pow(height, 2.0));

    //calculate area of triangle
    double area = (base * height);

    //calculate perimeter of triangle
    double perimeter = length + base + height;

    //Message displaying the area
    cout << "The traingle area is: " << area <<  " m^2\n";

    //Message displaying the perimeter
     cout << "The traingle perimeter is: " << perimeter <<  " m\n";
     return 0;
}

