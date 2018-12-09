#include <iostream>
#include <string>
#include "person.h"
#include "Employee.h"

using std::string;
using std::cout;

int main()
{
    cout << "This is a derived class demo\n";
    Person p1("John","Morgan","10/29/1966");
    Employee p2("Tammy","Morgan","12/7/1971","Paralegal",21);
}