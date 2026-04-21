#include "player.h"
#include "person.h"
#include <iostream>

Player::Player() {}

std::ostream &operator<<(std::ostream &out, const Player &player)
{
    out << "Player [" << player.get_full_name() << " " << player.get_age() << " " << player.get_address() << " " << "]";
    return out;
}

Player::~Player()
{
}