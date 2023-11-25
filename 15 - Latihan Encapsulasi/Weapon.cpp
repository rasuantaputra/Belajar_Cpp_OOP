#include<iostream>
#include "Weapon.hpp"

Weapon::Weapon(const char *name, double attackPower){
    this->name = name;
    this->attackPower = attackPower;
}

void Weapon::display(){
        std::cout << "Weapon ini adalah : " << this->name << " | Power : ";
        std::cout << this->attackPower << std::endl;
}

std::string Weapon::getName(){
    return this->name;
}