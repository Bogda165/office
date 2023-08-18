#include "Employee.hpp"


Employee::Employee(){
    name = "None";
    position = "None";
    salary = 0;
}
Employee::Employee(string _name, string _position, float _salary){
    name = _name;
    position = _position;
    salary = _salary;
}
void Employee::show()const{
    cout << "\n----------Employee----------\n";
    cout << "   Name : " << name << endl;
    cout << "   Position : " << position << endl;
    cout << "   Salary : " << salary << "$" << endl;
    cout << "----------------------------\n\n";
}
float Employee::culcSalary()const{
    return salary;
}
