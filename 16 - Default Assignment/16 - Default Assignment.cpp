#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
        double health;

    public:
        // dengan default assignment
        Hero(const char *name = "Player", double health = 125){
            this->name = name;
            this->health = health;
        }

        void display(){
            cout << "\nPlayer name : " << this->name << endl;
            cout << "Health : " << this->health << endl;
        }
};


int main(int argc, char const *argv[])
{

    Hero *hero1 = new Hero("Ucup", 120); // mau bikin aja di heap
    hero1->display();

    Hero hero2 =  Hero(); // lg pengen bikin di stack
    hero2.display();

    Hero *hero3 = new Hero("otong"); // mau bikin aja di heap
    hero3->display();

    delete hero1, hero3;    
    return 0;
}
