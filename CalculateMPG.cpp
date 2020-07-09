#include <iostream> //header file
#include <string>   //header file
using namespace std;

 int main()
{
    //stores variables for mpg calculation
    double mpg, 
        miles = 375, 
        gallons = 15;
    //mpg calculation 
    mpg = miles / gallons;

    cout << "Your vehicle gets " << mpg << "miles per gallon";
    return 0;
}