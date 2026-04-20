#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer() {}

std::ostream &operator<<(std::ostream &out, const Engineer &engineer)
{
    out << "Engineer [" << engineer.get_full_name() << " " << engineer.get_age() << " " << engineer.get_address() << " " << engineer.contract_count << "]";
    return out;
}

Engineer::~Engineer() {}