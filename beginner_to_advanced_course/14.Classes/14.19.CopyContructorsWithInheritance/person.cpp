#include "person.h"
#include <iostream>

Person::Person()
{
    std::cout << "Person default constructor called" << std::endl;
}

Person::Person(std::string_view fullname, int age, std::string_view address) : m_full_name(fullname), m_age(age), m_address(address)
{
    std::cout << "Person custom constructor called" << std::endl;
}

Person::Person(const Person &source) : m_full_name(source.m_full_name), m_age(source.m_age), m_address(source.m_address)
{
    std::cout << "Person copy constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person [" << person.m_full_name << " " << person.m_age << " " << person.m_address << "]";
    return out;
}

Person::~Person() {}