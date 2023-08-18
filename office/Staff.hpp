#pragma once
#include "Employee.hpp"

class Staff:public Employee{
protected:
    float bonus;
public:
    Staff();
    Staff(string _name, string _postition, float _salary, float _bonus);
    
    virtual void show()const override;
    virtual float culcSalary()const override;
};
