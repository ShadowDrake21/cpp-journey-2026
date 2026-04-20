#include "person.h"
#include <iostream>

Person::Person()
{
    std::cout << "Person default constructor called" << std::endl;
}

Person::Person(std::string_view fullname, int age, const std::string address) : m_full_name(fullname), m_age(age), m_address(address) {}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person [" << person.m_full_name << " " << person.m_age << " " << person.m_address << "]";
    return out;
}

Person::~Person() {}