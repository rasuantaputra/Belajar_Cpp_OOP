#include <iostream> //boleh juga di tulis di "Player.h"

#include "Player.h"

// ini untuk penjabaran dari prototype nya

Player::Player(const char *name){
    this->name = name;
}

void Player::display(){
    std::cout << "Nama Player: "<< this->name << std::endl;
}

// #include<string> nya udah ada di "Player.h"
std::string Player::getName(){
    return this->name;
}

void Player::setName(const char *name){
    this->name = name;
}