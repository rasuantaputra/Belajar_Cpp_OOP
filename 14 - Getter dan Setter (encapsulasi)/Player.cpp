#include <iostream>
#include <string>

#include "Player.hpp"

Player::Player(const char *name){
    this->name = name;
    this->level = 1;
    this->exp = 0;
    this->attackPower = 100;
}

    // getter : ini artinya kita akan membuat attribute menjadi read only
std::string Player::gateName(){
    return this->name;
}

// setter : untuk write data ke class
// kita gamau ngerubah 'level' secara langsung, tapi kita ubah si 'level' seiring bertambahnya 'exp'
void Player::addExperience(int expValue){
    int maxExp = 100;
    std::cout << "Mendapatkan exp = " << expValue << std::endl;
    this->exp += expValue; // kita ubah 'exp' di scatter, dan gabisa langsung karena dia attribute yg di "Private"
        
    // jika exp >= maxExp
    if (this->exp >= maxExp){
        // maka dia level uo
        this->level++;
        this->attackPower += 100;
        std::cout<< "\nLEVEL UP" << std::endl;
        this->exp = 0;
    }
}

void Player::display(){
    std::cout << "Name\t: " << this->name << std::endl;
    std::cout << "Level : " << this->level << ", Exp : " << this->exp << std::endl;
    std::cout << "Attack\t: " << this->attackPower << std::endl;
}