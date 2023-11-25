#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string name;

    public:
        Hero(const char *name){
            this->name = name;
        }

        // setter
        void setName(const char *name){
            this->name = name;
        }


        // ini fungsi "const" di method biar bisa digunakan kalau misal ada objek yg konstan
        void display() const{
            cout << "Name : " << this->name << endl;
        }

        // getter
        string getName() const{
            return this->name;
        }

    
};

int main(int argc, char const *argv[])
{
    Hero hero1 = Hero("bankai"); // ini objek tidak "constant", jadi bisa kita ubah2. Mapun si "attribute" nya "public" !!!
    hero1.display();
    hero1.name = "Mario"; // bisa
    hero1.display();
    hero1.setName("Mandal"); // ini jg bisa
    hero1.display();




    const Hero hero2 = Hero("Ucup"); // ini gabisa di rubah2 lagi
    // hero2.setName("Mandal"); // ini gak akan bisa
    hero2.display();

    /**
     * Kesimpulan : 
     * 1. jika object nya tidak const, maka seluruh member bisa dipanggil
     * 2. jika object nya const, maka hanya member function/method yang const
     *    yang dapat dipanggil.
    */

    return 0;
}
