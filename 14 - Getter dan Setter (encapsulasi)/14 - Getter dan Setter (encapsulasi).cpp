#include <iostream>
#include <string>

#include "Player.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Player player1 = Player("Naruko");
    player1.display();

    // inplementasi dari getter
    cout << player1.gateName() << endl;
    // player1.name = "Luna"; // tidak bisa write karena si attribute "Private"

    // kegiatan bertarung
    cout << "\nBertarung" << endl;
    player1.addExperience(25);
    player1.addExperience(50);
    player1.addExperience(10);
    player1.addExperience(20);

    // hasilnya
    player1.display();

    return 0;
}





