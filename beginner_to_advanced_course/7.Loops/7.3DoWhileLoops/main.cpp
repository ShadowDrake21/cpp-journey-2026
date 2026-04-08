#include <iostream>

int main()
{
 const size_t COUNT = 10;
 size_t i {0};

 do{
  std::cout << i << ": I love programming!" << std::endl;
  i++;
 } while(i < COUNT);

 std::cout << "Loop done!" << std::endl;

 return 0;
}