#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
    std::cout << "Civil Engineer default constructor called" << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality) : Engineer(fullname, age, address, contract_count), m_speciality(speciality)
{
    std::cout << "Civil Engineer custom constructor called" << std::endl;
}

// CivilEngineer::CivilEngineer(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality)
// {
//     m_full_name = fullname;
//     m_age = age;
//     m_address = address;
//     m_speciality = speciality;
//     std::cout << "Civil Engineer custom constructor called" << std::endl;
// }

// CivilEngineer::CivilEngineer(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality) : m_full_name(fullname), m_age(age), m_address(address), m_speciality(speciality)
// {
//     std::cout << "Civil Engineer custom constructor called" << std::endl;
// }

CivilEngineer::CivilEngineer(const CivilEngineer &source) : Engineer(source), m_speciality(source.m_speciality)
{
    std::cout << "Civil Engineer copy constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilEngineer)
{
    out << "Civil Engineer: " << civilEngineer.get_full_name()
        << ", Age: " << civilEngineer.get_age()
        << ", Address: " << civilEngineer.get_address()
        << ", Contract Count: " << civilEngineer.get_contract_count()
        << ", Speciality: " << civilEngineer.m_speciality;

    return out;
}

CivilEngineer::~CivilEngineer() {}