#include "Employee.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;

Employee::Employee( string firstname, 
                    string lastname, 
                    string dob,
                    string jobTitle, 
                    float hourly):
    Person(firstname,lastname,dob),
    m_jobTitle(jobTitle),
    m_hourly(hourly)
{
    cout << "Employing " << Person::m_firstname << " at a rate of $" << Employee::Salary() << " per year.\n";
}

Employee::~Employee()
{

}