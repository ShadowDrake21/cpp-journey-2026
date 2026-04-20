#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

class Engineer : private Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

public:
    Engineer();
    ~Engineer();

    void build_something()
    {
        // m_full_name = "Nurse Joy";
        // m_age = 20;
        // m_address = "123 Main St";
    }

    int get_contract_count() const
    {
        return contract_count;
    }

public:
    using Person::add;

protected:
    using Person::get_address;
    using Person::get_age;
    using Person::get_full_name;

private:
    int contract_count{0};
};

#endif // ENGINEER_H