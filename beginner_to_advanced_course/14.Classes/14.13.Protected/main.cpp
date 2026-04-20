#include <iostream>
#include "person.h"
#include "player.h"

int main()
{
  Player player("Basketball", "Michael", "Jordan");
  std::cout << player << std::endl;
}