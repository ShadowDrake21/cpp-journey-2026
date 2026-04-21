#include <iostream>
#include "parent.h"
#include "child.h"

int main()
{
  Child child(33);
  child.print_var();
  child.Parent::print_var();

  std::cout << "------------------------------" << std::endl;
  child.show_values();
  return 0;
}