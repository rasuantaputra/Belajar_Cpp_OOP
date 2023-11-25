// friend

/**
 * friend" sebuah keyword, yang nantnya akan membuat function bisa mengakses
 * member public atau non-public. contohnya "private"
*/

#include <iostream>
#include <string>

using namespace std;

class IntelHero;

class StrengthHero{
    private:
        string name;
        double health;

    public:
        StrengthHero(const char *name){
            this->name = name;
            this->health = 100;
        }

        friend bool compare(const StrengthHero &hero1, const IntelHero &hero2); // deklarasi nya di luar
        friend bool compare(const IntelHero &hero1, const StrengthHero &hero2); // deklarasi di "IntelHero"

};

class IntelHero{
    private:
        string name;
        double health;

    public:
        IntelHero(const char *name){
            this->name = name;
            this->health = 50;
        }

        friend bool compare(const StrengthHero &hero1, const IntelHero &hero2);

        // bisa juga di dalem sini
        friend bool compare(const IntelHero &hero1, const StrengthHero &hero2){
            cout << "Fungsi compare di dalam scope class" << endl;
            return hero1.health > hero2.health;
        };

};

bool compare(const StrengthHero &hero1, const IntelHero &hero2){
    cout << "Fungsi compare di global scope" << endl;

    return hero1.health > hero2.health;
}

// bisa bikin di luar kaya gini
// bool compare(const IntelHero &hero1, const StrengthHero &hero2){
//     cout << "Fungsi compare di global scope" << endl;

//     return hero1.health > hero2.health;
// }

int main(int argc, char const *argv[])
{
    StrengthHero hero1 = StrengthHero("Utjup");
    IntelHero hero2 = IntelHero("Otong");

    cout << compare(hero1, hero2) << endl; // karena "friend" jadi dia bisa akses 'health' yg padahal "private"
    cout << compare(hero2, hero1) << endl; // karena "friend" jadi dia bisa akses 'health' yg padahal "private"

    return 0;
}
