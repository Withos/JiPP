#include "lab6/HRMS.hpp"

using namespace std;

int main()
{
    Employee employed[10] = {
{"1", "Ludmila", "Romanowska", "Designer"},
{"2", "Mucha", "Mucha", "Sr Designer"},
{"3", "Adela", "Krol", "Designer"},
{"4", "Angelika", "Lis", "Coder"},
{"5", "Tamara", "Krawczyk", "Scpripter"},
{"6", "Lillianna", "Brzozowska", "Sr Scripter"},
{"7", "Norbet", "Lipiński", "Jr Coder"},
{"8", "Bernard", "Krawczyk", "Jr Designer"},
{"9", "Tomasz", "Sadowki", "Janitor"},
{"10", "Maria", "Szczepaniak", "Janitor"},
};

HRMS Data;
Data.add(employed[0],"Game design", 6500);
Data.add(employed[1],"Game design", 10000);
Data.add(employed[2],"Game design", 6000);
Data.add(employed[3],"Game scripting", 7500);
Data.add(employed[4],"Game scripting", 8000);
Data.add(employed[5],"Game scripting", 11000);
Data.add(employed[6],"Game scripting", 4500);
Data.add(employed[7],"Game design", 4000);
Data.add(employed[8],"Maintance", 3000);
Data.add(employed[9],"Maintance", 3000);

Data.printDepartment("Game scripting");

Data.printSalaries();

Data.changeSalary(employed[7].getid(),4500);

Data.printSalariesSorted();

system("pause");

return 0;
}
