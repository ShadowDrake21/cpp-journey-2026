#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer()
{
    std::cout << "Engineer default constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Engineer &engineer)
{
    out << "Engineer [" << engineer.get_full_name() << " " << engineer.get_age() << " " << engineer.get_address() << " " << engineer.contract_count << "]";
    return out;
}

Engineer::~Engineer() {}