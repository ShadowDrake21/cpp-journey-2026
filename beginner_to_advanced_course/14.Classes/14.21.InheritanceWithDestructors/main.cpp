#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{
    // Person person("John Snow", 27, "Winterfell");
    // std::cout << person << std::endl;

    // std::cout << "------------------------------" << std::endl;
    // Engineer eng1("Tony Stark", 45, "10880 Malibu Point", 5);
    // std::cout << eng1 << std::endl;

    // Engineer eng2(eng1);
    // std::cout << "eng2: " << eng2 << std::endl;

    CivilEngineer civilEng("Bruce Wayne", 35, "Wayne Manor", 10, "House Construction");
    std::cout << civilEng << std::endl;
}