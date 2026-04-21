#ifndef CIVILENGINEER_H
#define CIVILENGINEER_H

#include "engineer.h"
#include "person.h"
#include <iostream>
#include <string>

class CivilEngineer : public Engineer
{
    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilEngineer);

public:
    CivilEngineer();
    CivilEngineer(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality);
    CivilEngineer(const CivilEngineer &source);
    ~CivilEngineer();

    void build_road() {}

private:
    std::string m_speciality{"Road Construction"};
};

#endif // CIVILENGINEER_H