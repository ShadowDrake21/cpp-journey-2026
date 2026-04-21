#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

class Engineer : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

public:
    Engineer();
    Engineer(std::string_view fullname, int age, std::string_view address, int contract_count);
    Engineer(const Engineer &source);
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

private:
    int contract_count{0};
};

#endif // ENGINEER_H