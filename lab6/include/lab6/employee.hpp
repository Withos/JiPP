#ifndef __EMPLOYEE__
#define __EMPLOYEE__
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Employee {
    public:
        Employee();
        Employee(string, string, string, string);
        void print_emp();
        string getid();
        void set_department(string);

    private:
        string id_e;
        string name_e;
        string surname_e;
        string departmentid_e="";
        string position_e;
};

#endif