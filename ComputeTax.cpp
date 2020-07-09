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

//Key Points
//(x >= 15 && x <= 30) this results in unnecessary CPU processing in wasted comparisons. Highlights decision structure in relational operations.

//Build a Menu to Select which type of Tax to compute: 
//Sales, Federal Income, or State Income taxes, or Exit the program.
//Use a Switch statement to determine which tax to compute
//We calculate Sales tax as we did in our previous submission ComputeTax.cpp, 
//however now we must add the calculations for Federal and State Income Taxes.

//Assignment 5
///Purpose: This program calculates a tax chosen by the user and determined by the dollar amount entered.
///Input: User menu selection and dollar amount
///Process: Determine tax rate that will be applied and then calculate the tax amount on user input.
///Output: Display tax category selected, dollar amount entered, tax rate and tax dollar amount.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    //Declare variables
    int choice; //user menu choice
    float amount; //dollar value entered by user
    float fedtaxrate;
    float statetaxrate;
    float salestaxrate;
    float fedtaxamount;
    float statetaxamount;
    float salestaxamount;
    string taxcategory;
    float displaytaxrate;
    float displaytaxamount;

    //Menu choices for switch block
    const int federalchoice = 1;
    const int statechoice = 2;
    const int saleschoice = 3;
    const int exitchoice = 4;

    //Show menu options and store user selection
    cout << "Enter 1, 2, 3 or 4 to select from the following menu:\n";
    cout << setw(12) << "1. Calculate Federal Income tax.\n";
    cout << setw(12) << "2. Calculate State Income tax.\n";
    cout << setw(12) << "3. Calculate Sales tax.\n";
    cout << setw(12) << "4. Exit program.\n";
    cin >> choice;

    //Determine which tax percentage will be applied based on menu selection and amount entered by the User. Switch statement used for tax category 
    switch (choice)
        {
        case federalchoice:
            //Get dollar value from user
            cout << "Enter dollar amount to calculate tax:";
            cin >> amount;

            //Income less than 50,000 not taxed
            if (amount < 50000)
                fedtaxrate = 0.00;
            //Income 50,000 and above but less than 101,000 is taxed at 11%
            else if (amount < 101000)
                fedtaxrate = 0.11;
            //Income 101,000 and above but  less than 149,000 is taxed at 13%
            else if (amount < 149000)
                fedtaxrate = 0.13;
            //Income 149,000 and above but less than 200,00 is taxed at 15%
            else if (amount < 200000)
                fedtaxrate = 0.15;
            //All Income 200,000 and above is taxed at 18%
            else
                fedtaxrate = 0.18;

            //Calculate Federal Taxes
            fedtaxamount = amount * fedtaxrate;

            //Set tax cateogry
            taxcategory = "Federal";
            displaytaxrate = fedtaxrate * 100; //Variable to call when displaying tax rate to user
            displaytaxamount = fedtaxamount;
            break;

        case statechoice:
            //Get dollar value from user
            cout << "Enter dollar amount to calculate tax:";
            cin >> amount;
            
            //Income less than 50,000 not taxed
            if (amount < 50000)
                statetaxrate = 0.00;
            //Income 50,000 and above but less than 100,000 is taxed at 10%
            else if (amount < 100000)
                statetaxrate = 0.10;
            //Income 100,000 and above but  less than 150,000 is taxed at 15%
            else if (amount < 150000)
                statetaxrate = 0.15;
            //Income 150,000 and above but less than 200,000 is taxed at 25%
            else if (amount < 200000)
                statetaxrate = 0.25;
            //All Income 200,000 and above is taxed at 30%
            else 
                statetaxrate = 0.30;
            
            //Calculate State Taxes
            statetaxamount = amount * salestaxrate;

            //Set Display variables
            taxcategory = "State";
            displaytaxrate = statetaxrate * 100;
            displaytaxamount = statetaxamount;
            break;

        case saleschoice:
            //Get dollar value from user
            cout << "Enter dollar amount to calculate tax:";
            cin >> amount;
            
            //If the dollar value is less than 50 the tax is 5%
            if (amount < 50000) // (x <= 50)
                salestaxrate = 0.05;
            //if the dollar value is 50 or greater but less than 100 the tax is 8%
            else if (amount < 100) // 
                salestaxrate = 0.08;
            //if the dollar value at least 100 but less than 200 the tax is 10%
            else if (amount < 200)
                salestaxrate = 0.10;
            //Otherwise, if the dollar value is 200 and above then the tax is 12%.
            else
                salestaxrate = 0.12;
            
            //Calculate Sales tax
            salestaxamount = amount * salestaxrate;

            //Set tax cateogry
            taxcategory = "Sales";
            displaytaxrate = salestaxrate * 100;
            displaytaxamount = salestaxamount;
            break;

        case exitchoice:
            cout << "Exiting this program.\n";
            break; 

        default:
            cout << "You did not choose wisely. Try again.\n";
        }
    
    
    //Display amount taxed.
    if (choice == federalchoice || choice == statechoice || choice == saleschoice)
    {    
        cout << setprecision(2) << fixed;
        cout << setw(15) << "Tax Cateogory" << setw(15) << "Dollar Amount" << setw(15) << "Tax Rate" << setw(15) << "Tax Amount\n";
        cout << setw(15) << taxcategory << setw(15) << amount << setw(15) << displaytaxrate << setw(15) << displaytaxamount << "\n";
    }
    else 
    {
        cout << "Hint: Fix your input!\n";
    }
    return 0;
}   