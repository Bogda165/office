#include "Staff.hpp"

Staff::Staff(){
    bonus = 0;
}
Staff::Staff(string _name, string _position, float _salary, float _bonus):
    Employee(_name, _position, _salary){
        bonus = _bonus;
}

void Staff::show()const{
    cout << "\n------------Staff-----------\n";
    cout << "   Name : " << name << endl;
    cout << "   Position : " << position << endl;
    cout << "   Salary : " << salary << "$" << endl;
    cout << "   Bonus : " << bonus << "$" << endl;
    cout << "----------------------------\n\n";
}
float Staff::culcSalary()const{
    return salary + bonus;
}
