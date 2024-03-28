#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include "Employee.h"
using namespace std;
class Manager : public Employee{
    private:
        double bonus;
    public:
        double calcPay() const ;//override;
        Manager (string theName, double theWage, double  theHours, double theBonus);
};
#endif // MANAGER_H