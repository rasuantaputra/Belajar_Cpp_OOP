#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

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