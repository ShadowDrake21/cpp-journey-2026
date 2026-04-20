#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer() {}

std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilEngineer)
{
    // out << "Civil Engineer: " << civilEngineer.get_full_name()
    //     << ", Age: " << civilEngineer.get_age()
    //     << ", Address: " << civilEngineer.get_address()
    //     << ", Speciality: " << civilEngineer.m_speciality;

        return out;
}

CivilEngineer::~CivilEngineer() {}