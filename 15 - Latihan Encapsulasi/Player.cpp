#include<iostream>
#include <string>
#include "Player.hpp"


Player::Player(const char *name){
    this->name = name;
}

void Player::display(){
    std::cout << "Player ini adalah : " << this->name << std::endl;
    std::cout << "Menggunakan senjata : " << this->weapon->getName() << std::endl;
}

void Player::equipWeapon(Weapon *weapon){
    this->weapon = weapon;
}