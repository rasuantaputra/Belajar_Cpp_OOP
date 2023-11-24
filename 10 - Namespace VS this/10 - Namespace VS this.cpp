/**
 * macam2 cara menulis constructor
*/
#include <iostream>
#include <string>

using namespace std;

class ClassTypes{
    public:
        // data member
        string dataStr;
        double dataDouble;
        double m_dataDouble; // "m_" di depan itu konvesi buat ngasih tau member dari si class nya

        ClassTypes(const char *dataStr, double dataDouble){
            // dengan menggunakan namespace
            ClassTypes::dataStr = dataStr;

            // menggunakan "this"
            // "this" itu pointer nya si "objek1", jadi dia nge-return address nya si objek
            this->dataDouble = dataDouble;
            
            // menggunakan konvensi 
            m_dataDouble = dataDouble;

        }
};

// member function
class Player{
    public:
        string name;
        double power;

        Player(const char* name, double power){
            Player::setName(name);
            this->setPower(power);
        }

        void setName(const char *name){
            this->name = name;
        }

        void setPower(double power){
            this->power = power;
        }
};


int main(int argc, char const *argv[])
{
    ClassTypes *object1 = new ClassTypes("object 1", 0.05);
    cout << object1->dataStr << endl;
    cout << object1->dataDouble << endl;
    cout << object1->m_dataDouble << endl;

    Player *player1 = new Player("ucup", 100);
    cout << player1->name << endl;
    cout << player1->power << endl;

    
    return 0;
}
