#ifndef PERSON_H
#define PERSON_H
#include <string>

using std::string;

class Person{
    protected:
        string m_firstname;
        string m_lastname;
        string m_dob;
    public:
        Person(string firstname, string lastname, string dob);
        ~Person();
};

#endif