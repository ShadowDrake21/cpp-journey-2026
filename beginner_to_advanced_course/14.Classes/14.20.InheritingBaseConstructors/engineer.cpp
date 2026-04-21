#include "person.h"
#include "engineer.h"
#include <iostream>

// Engineer::Engineer()
// {
//     std::cout << "Engineer default constructor called" << std::endl;
// }

// Engineer::Engineer(std::string_view fullname, int age, std::string_view address, int contract_count_param) : Person(fullname, age, address), contract_count(contract_count_param)
// {
//     std::cout << "Engineer custom constructor called" << std::endl;
// }

// // Engineer::Engineer(const Engineer &source) : Person(source.m_full_name, source.m_age, source.get_address()),
// //                                              contract_count(source.contract_count)
// // {
// //     std::cout << "Engineer copy constructor called" << std::endl;
// // }

// Engineer::Engineer(const Engineer &source) : Person(source),
//                                              contract_count(source.contract_count)
// {
//     std::cout << "Engineer copy constructor called" << std::endl;
// }

Engineer::Engineer(std::string_view fullname, int age, std::string_view address, int contract_count_param) : Person(fullname, age, address), contract_count(contract_count_param)
{
    std::cout << "Engineer custom constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Engineer &engineer)
{
    out << "Engineer [" << engineer.get_full_name() << " " << engineer.get_age() << " " << engineer.get_address() << " " << engineer.contract_count << "]";
    return out;
}

Engineer::~Engineer() {}