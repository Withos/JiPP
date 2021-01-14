#ifndef __HRMS__
#define __HRMS__
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <map>
#include "employee.hpp"

class HRMS {
    public:
        void add(Employee employee, std::string departmentId, double salary);
        void printDepartment(std::string departmentId);
        void changeSalary(std::string employeeId, double salary);
        void printSalaries();
        void printSalariesSorted();

        private:
        map<string, Employee> Employees;
        map<string, vector<string>> Departments;
        map<string, double> Salaries;
};

#endif