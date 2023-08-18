#pragma once
#include <iostream>
#include <string>

using namespace std;
using std::cout;
using std::string;
using std::endl;

class Employee{
protected:
    string name;
    string position;
    float salary;
public:
    Employee();
    Employee(string _name, string _position, float _salary);
    
    virtual void show()const = 0;
    virtual void culcSalary()const = 0;
};
