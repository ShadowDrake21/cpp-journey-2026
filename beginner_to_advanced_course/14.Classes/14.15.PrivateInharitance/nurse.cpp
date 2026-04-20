#include "nurse.h"

Nurse::Nurse()
{
}

std::ostream &operator<<(std::ostream &out, const Nurse &operand)
{
    out << "Nurse [" << operand.get_full_name() << " " << operand.get_age() << " " << operand.get_address() << " " << operand.practice_certificate_id << "]";
    return out;
}

Nurse::~Nurse()
{
}