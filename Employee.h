#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"
#include<string>

using std::string;

class Employee : public Person
{
    private:
        float m_hourly;
        string m_jobTitle;
    public:
        Employee(string firstname, string lastname, string dob,string jobTitle, float hourly);

        ~Employee();

        inline float Salary()
        {
            return (m_hourly * 2000);
        }
};

#endif