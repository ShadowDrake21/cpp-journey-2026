#ifndef CIVILENGINEER_H
#define CIVILENGINEER_H

#include "engineer.h"
#include <iostream>
#include <string>

class CivilEngineer : public Engineer
{
    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilEngineer);

public:
    CivilEngineer();
    ~CivilEngineer();

    void build_road() {}

private:
    std::string m_speciality{"Road Construction"};
};

#endif // CIVILENGINEER_H