//In the programs we have written so far, 
//we have just written logic that executes one line of code after the other, 
//from beginning to end, executing each line sequentially.  
//Now we begin to make decisions in our logic the decides which lines or blocks{} 
//of code our program will execute, and excluding other lines or blocks of code{}. 
//We begin to architect (control) the execution flow of our programs based on decisions.
//I do not think the book gives a very clear and straightforward example of 
//"Checking Numeric Ranges" and the importance of our "boundary" values. 
//Boundaries are the minimum or maximum values that keep you in a decision block.  
//The importance comes in the attention you will need to make to these values and 
//when to use great than > or greater than or equal to >=, 
//same with less than < or less than or equal to <=.



//Assignment 5
///Purpose: This program calculates a tax depending on the value of the input.
///Input: Dollar amount
///Process: Calculate appropriate tax depending on dollar amount.
///Output: Display tax amount on value entered.

//psuedocode
//Get dollar value from user
//Determine which tax percentage will be applied using the following rules:
////If the dollar value is less than 50 the tax is 5%
////if the dollar value is 50 or greater but less than 100 the tax is 8%
////if the dollar value at least 100 but less than 200 the tax is 10%
////Otherwise, if the dollar value is 200 and above then the tax is 12%.
//Calculate the tax
//Display amount taxed.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Get dollar value from user
    float x;
    cout << "Enter dollar amount to calculate tax:";
    cin >> x; 
    
    //Determine which tax percentage will be applied using the following rules:
    ////If the dollar value is less than 50 the tax is 5%
    float tax;
    if (x < 50) // (x <= 50)
        tax = 0.05;
    ////if the dollar value is 50 or greater but less than 100 the tax is 8%
    else if (x < 100) // (x >= 15 && x <= 30) this results in unnecessary CPU processing in wasted comparisons. Highlights decision structure in relational operations.
        tax = 0.08;
    ////if the dollar value at least 100 but less than 200 the tax is 10%
    else if (x < 200)
        tax = 0.10;
    ////Otherwise, if the dollar value is 200 and above then the tax is 12%.
    else
        tax = 0.12;
    
    //Calculate the tax.
    float taxpaid = x * tax;

    //Format variable data for display message
    tax = tax * 100;
    
    //Display amount taxed.
    cout << setprecision(2) << fixed;
    cout << setw(12) << "Dollar Amount" << setw(12) << "Tax Rate" << setw(12) << "Tax Amount\n";
    cout << setw(12) << x << setw(12) << tax << setw(12) << taxpaid << "\n";
    return 0;
}   