#include <lab6/employee.hpp>


Employee::Employee()
{

};

Employee::Employee(string id, string name, string surname, string position)
{
    id_e=id;
    name_e=name;
    surname_e=surname;
    position_e=position;
    departmentid_e="";
};

string Employee::getid()
{
    return id_e;
}

void Employee::set_department(string departmentid)
{
    departmentid_e=departmentid;
}

void Employee::print_emp()
{
    cout<<"ID: "<<id_e<<endl<<"Name: "<<name_e<<endl<<"Surname: "<<surname_e<<endl<<"Department ID: "<<departmentid_e<<endl<<"Position: "<<position_e<<endl;
}