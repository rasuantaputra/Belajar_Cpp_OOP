#include <iostream>
#include <string>

using namespace std;

class Player{
    private:
        string nama_depan;
        string nama_tengah;
        string nama_belakang;

    public:
        Player(){
            nama_depan = "depan"; // menggunakan teknik implisitS
            this->nama_tengah = "tengah"; // menggunakan teknik explisit dengan menggunakan pointer "this" dan "arrow"
            // Player::nama_belakang = "belakang" // ini juga explisit dengan "namespace"
            (*this).nama_belakang = "belakang"; // ini explisit juga, dengan "dereferance" dan operator "dot"
        }

        // kita bisa melakukan cascade function calls dengan "*this"
        Player &setNamaDepan(const char *depan){
            this->nama_depan = depan;
            return *this;
        }

        Player &setNamaBelakang(const char *belakang){
            this->nama_belakang = belakang;
            return *this;
        }

        Player &setNamaTengah(const char *tengah){
            this->nama_tengah = tengah;
            return *this;
        }

        void display(){
            cout << "Nama: ";
            cout << " " << nama_depan;
            cout << " " << this->nama_tengah;
            cout << " " << (*this).nama_belakang << endl;
        }
};


int main(int argc, char const *argv[])
{
    Player *player1 = new Player();
    player1->display();

    player1->setNamaDepan("ucup");
    player1->setNamaBelakang("Surucup");
    player1->setNamaTengah("Dangerous");
    player1->display();

    // cascade function calls
    player1->setNamaDepan("Otong").setNamaTengah("The Best").setNamaBelakang("surotong");
    player1->display();

    // urutan cascade function calls ga harus urut
    Player player2 = Player();
    player2.display();
    player2.setNamaTengah("Crewsakan").setNamaDepan("Bambang").setNamaBelakang("Kambang");
    player2.display();

    delete player1;    
    return 0;
}
