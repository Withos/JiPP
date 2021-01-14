#include "lab6/HRMS.hpp"
#include <algorithm>
void HRMS::add(Employee employee, std::string departmentId, double salary)
{
    employee.set_department(departmentId);
    Salaries[employee.getid()]=salary;
    Employees[employee.getid()]=employee;
    Departments[departmentId].push_back(employee.getid());
}

void HRMS::printDepartment(string departmentId)
{
    for (size_t it;it<Departments[departmentId].size();it++)
    {
        cout<<"Employees in department with id "<<departmentId<<" :"<<endl; 
        Employees[Departments[departmentId][it]].print_emp();
    }
}

void HRMS::changeSalary(string employeeId, double salary)
{
    Salaries[employeeId]=salary;
}

void HRMS::printSalaries()
{
    for (auto it=Salaries.begin();it!=Salaries.end();it++)
    {
        Employees[it->first].print_emp();
        cout<<"Salary: "<<it->second<<endl;
    }
}

bool comp_pairs(const pair<string,double> &x, const pair<string, double> &y)
{
    return(x.second > y.second);
}

void HRMS::printSalariesSorted()
{
    vector<pair<string,double>> temp;  

    for(auto it=Salaries.begin();it!=Salaries.end();it++)
    {
        temp.push_back(make_pair(it->first,it->second));
    }

    sort(temp.begin(), temp.end(), comp_pairs);

    for (size_t i=0;i<temp.size();i++)
    {
        Employees[temp[i].first].print_emp();   
        cout<<"Salary: "<<temp[i].second<<endl;
    }
}