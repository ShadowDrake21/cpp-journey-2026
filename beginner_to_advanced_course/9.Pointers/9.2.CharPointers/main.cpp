#include <iostream>

int main()
{
  const char *message {"Hello, World!"};
  std::cout << message << std::endl;

  std::cout << "*message: " << *message << std::endl;

  char message1[] {"Hello, World!"};
  message1[0] = 'b';
  std::cout << message1 << std::endl;
}