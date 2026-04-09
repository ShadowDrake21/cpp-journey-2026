#include <iostream>

int main()
{
  // declare and initialize pointer
  // int * p_number {nullptr};

  // double * p_fractional_number{nullptr};

  // int* p_number1 = nullptr;
  // double* p_fractional_number1 = nullptr;

  // std::cout <<"sizeof(int):" << sizeof(int) << std::endl;
  // std::cout <<"sizeof(double):" << sizeof(double) << std::endl;
  // std::cout << "sizeof(int*):" << sizeof(int*) << std::endl;
  // std::cout << "sizeof(double*):" << sizeof(double*) << std::endl;
  // std::cout << "sizeof(p_number):" << sizeof(p_number) << std::endl;
  // std::cout << "sizeof(p_fractional_number):" << sizeof(p_fractional_number) << std::endl;

  int int_var {43};
  int *p_int {&int_var};

  std::cout << "Int var: " << int_var << std::endl;
  std::cout << "Pointer to int: " << p_int << std::endl;

  int int_var1 {65};
  p_int = &int_var1;
  std::cout << "Int var1: " << int_var1 << std::endl;
  std::cout << "Pointer to int1: " << p_int << std::endl;

  // int *p_int1 {nullptr};
  // double double_var {3.14};
  // p_int1 = &double_var;
  // std::cout << "Double var: " << double_var << std::endl;
  // std::cout << "Pointer to double: " << p_int1 << std::endl;

  int *p_int2 {nullptr};
  int int_data {56};
  p_int2 = &int_data;

  std::cout << "value: " << *p_int2 << std::endl;
}