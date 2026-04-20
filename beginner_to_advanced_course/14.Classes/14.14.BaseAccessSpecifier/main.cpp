#include <iostream>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

int main()
{
  Person person1("John Doe", 30, "123 Main St");
  std::cout << person1 << std::endl;

  std::cout << "------------------------------" << std::endl;
  Player player1;
  player1.m_full_name = "Ariana Grande";
  // player1.m_age = 30;

  std::cout << "------------------------------" << std::endl;

  Nurse nurse1;
  // nurse1.m_full_name = "Nurse Joy";
  // nurse1.m_age = 20;
  // nurse1.address = "123 Main St";

  std::cout << "------------------------------" << std::endl;
  Engineer engineer1;

  // engineer1.m_full_name = "Elon Musk";
  // engineer1.m_age = 50;
  // engineer1.m_address = "123 Main St";
}