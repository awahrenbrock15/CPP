#include <iostream>
#include <iomanip>
#include "Manager.h"
using namespace std;
double Manager::calcPay() const{
    return Employee::calcPay() + bonus;
}
Manager::Manager (string theName, double theWage, double theHours, double theBonus):Employee (theName, theWage, theHours),bonus(theBonus){}
