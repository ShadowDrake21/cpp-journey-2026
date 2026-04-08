#include <iostream>

int main()
{
  int scores [10]; // junk data

  // for (size_t i {}; i < 10; ++i) {
  //   std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
  // }

  // std::cout << "Loop done" << std::endl;

  // write data
  // scores[0] = 20;
  // scores[1] = 30;
  // scores[2] = 40;

  // std::cout << "After writing data:" << std::endl;
  // for (size_t i {}; i < 10; ++i) {
  //   std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
  // }

  // for (size_t i {}; i < 10; ++i) {
  //  scores[i] = i * 10;
  // }

  // for (size_t i {}; i < 10; ++i) {
  //   std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
  // }

  // double salaries[5] {12.3, 24.5, 36.7, 48.9, 60.1};

  // for (size_t i {}; i < 5; ++i) {
  //   std::cout << "salaries[" << i << "]: " << salaries[i] << std::endl;
  // }


  // int families [5] {1, 2, 3};

  // for (size_t i {}; i < 5; ++i) {
  //   std::cout << "families[" << i << "]: " << families[i] << std::endl;
  // }

  int class_sizes [] {30, 25, 35, 20, 40};

  for (auto value: class_sizes) {
    std::cout << "class_sizes: " << value << std::endl;
  }

  return 0;
}