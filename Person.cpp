#include "person.h"
#include<string>
#include<iostream>

using std::string;
using std::cout;


Person::Person(string firstname, string lastname, string dob)
    :m_firstname(firstname), m_lastname(lastname), m_dob(dob)
{
    cout << m_firstname << " " << m_lastname << " born on " << m_dob << "\n";
}

Person::~Person()
{

}