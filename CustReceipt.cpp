//Assignment 3 - Customer Receipt
///Purpose: This program prints a customer receipt that calculates total price from a fixed sales tax and arbitrary item price
///Input: itemprice, item, salestax
///Process: tax = itemprice * salestax, totalprice = itemprice + tax 
///Output: Print message "Customer Receipt: $totalprice, Price: 10.00 + Tax: 0.83, for product item"

//psuedocode
///Store variable data
///Calculate tax
///Calculate totalprice
///Display ""Customer Receipt: $totalprice, Price: 10.00 + Tax: 0.83, for product item""

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string item = "Flower";
    double salestax = 0.0825, itemprice = 32.00;
    double tax = itemprice * salestax;
    double totalprice = itemprice + tax;

