#ifndef CHILD_H
#define CHILD_H

#include "parent.h"

class Child : public Parent
{
public:
    Child();
    Child(int member_var) : m_member_var(member_var) {}
    ~Child() = default;

    void print_var() const
    {
        std::cout << "Child member variable: " << m_member_var << std::endl;
    }

    void show_values() const
    {
        std::cout << "Child member variable: " << m_member_var << std::endl;
        std::cout << "Parent member variable: " << Parent::m_member_var << std::endl;
    }

private:
    int m_member_var{200};
};

#endif // CHILD_H