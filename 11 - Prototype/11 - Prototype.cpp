#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string name;

        // constructor dengan prototype
        Player(const char *);
        void display();
        string getName();
        void setName(const char *);
};


int main(int argc, char const *argv[])
{   
    Player *playerObject = new Player("Marni");
    playerObject->display();

    cout << "get name: " << playerObject->getName() << endl;
    
    cout << "rubah nama"<< endl;
    playerObject->setName("Isabella");
    playerObject->display();

    delete playerObject;
    return 0;
}

Player::Player(const char *name){
    this->name = name;
}

void Player::display(){
    cout << "Nama Player: "<< this->name << endl;
}

string Player::getName(){
    return this->name;
}

void Player::setName(const char *name){
    this->name = name;
}