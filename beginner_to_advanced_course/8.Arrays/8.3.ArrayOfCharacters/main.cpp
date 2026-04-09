#include <iostream>

int main()
{
  char message [6] = {'H', 'e', 'l', 'l', 'o', '\0'};

  // std::cout << "message: ";

  // for (auto c : message) {
  //   std::cout << c;
  // }
  // std::cout << std::endl;

  // // change characters in our array

  // message[1] = 'a';

  // std::cout << "message: ";
  // for (auto c : message) {
  //   std::cout << c;
  // }
  // std::cout << std::endl;

  std::cout << "message: " << message << std::endl;

  char message1 [] {'W', 'o', 'r', 'l', 'd', '\0'};
  std::cout << "message1: " << message1 << std::endl;
  std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

  char message2 [6] {'H', 'e', 'l', 'l', 'o'};
  std::cout << "message2: " << message2 << std::endl;
  std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;

    char message3 [] {'H', 'e', 'l', 'l', 'o'};
  std::cout << "message3: " << message3 << std::endl;
  std::cout << "sizeof(message3): " << sizeof(message3) << std::endl;

  // string literal
  char message4 [] {"Hello"};
  std::cout << "message4: " << message4 << std::endl;
  std::cout << "sizeof(message4): " << sizeof(message4) << std::endl;


  // 
  int numbers [] {1,2,3,4,5};
  std::cout << "numbers: " << numbers << std::endl;
  
}