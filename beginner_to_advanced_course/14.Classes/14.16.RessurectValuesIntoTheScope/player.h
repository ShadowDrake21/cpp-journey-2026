#ifndef PLAYER_H
#define PLAYER_H
#include "person.h"

class Player : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Player &player);

public:
    Player();
    ~Player();

    void play()
    {
        m_full_name = "John Cena";
        m_age = 55;
        // m_address = "DADFGH;ADAD;GHDGF;";
    }

private:
    int m_career_start_year{0};
    double m_salary{0.0};
    int health_factor{0}; // 0-10
};

#endif // PLAYER_H