#include <iostream>
#include <iomanip>
#include "Employee.cpp"
#include "Manager.cpp"
using namespace std;
int main(){
    cout << "# Author:" << setw(31) << "Aiden Wahrenbrock" << endl;
    cout << "# BannerID:" << setw(21) << "001396194" << endl;
    cout << "# Course:"  << setw(20) << "CS 181" << endl;
    cout << "# Assignment:" << setw(13) << "PA4" << endl;
    cout << "# Date Assigned:" << setw(29) << "Monday, March 18, 2024" << endl;
    cout << "# Date/Time Due:" << setw(43) << "Saturday, March 30, 2024 -- 11:55 pm" << endl << endl;
    cout << "# Description:" << setw(46) << "This program will exercise Object- \n " << setw(49) << "Oriented concepts with C++."  << endl << endl;
    cout << "# Certification of Authenticity: \n    I certify that this assignment is entirely my own work." << endl << endl;


    int numManagers;
    cout << "Enter number of managers: ";
    cin >> numManagers;
    cout << endl;

    Manager *workers[numManagers];
         
    cout << fixed << showpoint << setprecision(2);
    
    for (int i = 0; i < numManagers; i++){
        string name;
        double wage, bonus, hours;

        cout << "Enter manager " << i << " name: ";
        cin >> name;
        cout << "Enter manager " << i << " hourly wage: ";
        cin >> wage;
        cout << "Enter manager " << i << " hours worked: ";
        cin >> hours;
        cout << "Enter manager " << i << " bouns: ";
        cin >> bonus;
        cout << endl;
        workers[i] = new Manager(name,wage,hours, bonus);
    }

    double average, highestPay = 0.0;
    Manager highestPaidManager = *workers[1];
    for (int i = 0; i < numManagers; i++){
        if ((*workers[i]).calcPay() > highestPay){
            highestPay = (*workers[i]).calcPay();
            highestPaidManager = *workers[i];
        }
        average += (*workers[i]).calcPay();
    }

    
    cout << endl << "Highest paid manager is " << highestPaidManager.Employee::getName() << " who is paid $" << highestPaidManager.calcPay();
    cout << endl << "Average pay is $" << average/numManagers;

    return 0;
}