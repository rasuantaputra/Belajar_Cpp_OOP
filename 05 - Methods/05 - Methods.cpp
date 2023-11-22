#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        double IPK;

    Mahasiswa(string inputNama, double inputIPK){
        // ini cara penulisan lbh aman
        Mahasiswa::nama = inputNama;
        // bisa juga gini cara nulisnya
        IPK = inputIPK;
        
    }

    // method tanpa parameter dan tanpa return
    void tampilkanData(){
        cout << "Nama saya " <<Mahasiswa::nama << ", IPK saya adala ";
        cout << IPK << endl;
    }

    // methodd dengan parameter dan tanpa return
    void ubahNama(const char *namaBaru){
        Mahasiswa::nama = namaBaru;
    }

    // methode tanpa parameter dan dengan return
    string getNama(){
        return Mahasiswa::nama;
    }

    double getIPK(){
        return IPK;
    }

    // method dengan parameter dan return
    double katrolIPK(const double &tambahanNilai){
        return Mahasiswa::IPK + tambahanNilai;
    }
};


int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucuo", 3.0);
    Mahasiswa mahasiswa2 = Mahasiswa("otong", 4.0);

    cout << mahasiswa1.nama << endl;
    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();

    mahasiswa1.ubahNama("mario");
    mahasiswa1.tampilkanData();

    string dataNama = mahasiswa1.getNama();
    cout <<"dataNama = " << dataNama <<endl;
    cout <<"dataIPK = " << mahasiswa1.getIPK() <<endl;
    cout <<"nilai katrol = " << mahasiswa2.katrolIPK(-2.5) <<endl;

    return 0;
}
