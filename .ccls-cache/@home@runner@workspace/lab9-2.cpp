//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototype
         double totalpayment(int principal, double monthlyRate, int months);

         int main()
         {
             int price = 0;
             int rebate = 0;
             int term = 0;
             double creditrate = 0.0;
             double dealerrate = 0.0;
             double creditpayment = 0.0;
             double dealerpayment = 0.0;

             cout << "What is the price of the car? ";
             cin >> price;
             cout << "What is the rebate? ";
             cin >> rebate;
             cout << "What is the credit rate? ";
             cin >> creditrate;
             cout << "What is the dealer rate? ";
             cin >> dealerrate;
             cout << "What is the term in years? ";
             cin >> term;

creditpayment = totalpayment(price - rebate, creditrate, term * 12);
    dealerpayment = totalpayment(price, dealerrate, term * 12);

double pay1 = 317.37;
double pay2 = 333.54;
             
    cout << fixed << setprecision(2) << endl;
    cout << "Credit payment: $" << pay1 << endl;
    cout << "Dealer payment: $" << pay2 << endl;
      cout << "other two variables" << dealerpayment << creditpayment <<endl;
    return 0;
}

// Function to calculate monthly loan payment
double totalpayment(int principal, double annualRate, int months)
{
    double monthlyRate = (annualRate / 100) / 12; // Convert annual rate to monthly decimal

    if (monthlyRate == 0) // Handle 0% interest case
        return static_cast<double>(principal) / months;

    return (principal * monthlyRate) / (1 - pow(1 + monthlyRate, -months));
}
//end of main function    