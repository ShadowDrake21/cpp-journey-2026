#include <iostream>

int main()
{
  // for (unsigned int i {}; i < 100; ++i) {
  //   std::cout << i << std::endl;
  //   std::cout << "I love C++" << std::endl;
  // }

  // std::cout << "Loop done" << std::endl;

  // for (size_t i {0}; i < 10; ++i) {
  //   std::cout << i << " : I love C++" << std::endl;
  // }

  // std::cout << "Loop done" << std::endl;

  // std::cout << "sizeof size_t: " << sizeof(size_t) << std::endl;

  // size_t i {0};

  //  for (; i < 10; ++i) {
  //   std::cout << i << " : I love C++" << std::endl;
  // }

  //   std::cout << "Loop done" << std::endl;



  const size_t COUNT {10};

   for (size_t i {0}; i < COUNT; ++i) {
    std::cout << i << " : I love C++" << std::endl;
  }

    std::cout << "Loop done" << std::endl;
  return 0;
}