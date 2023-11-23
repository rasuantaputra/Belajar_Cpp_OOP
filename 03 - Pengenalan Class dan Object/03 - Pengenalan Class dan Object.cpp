#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    string NIM;
    string jurusan;
    double IPK;
};


int main(int argc, char const *argv[])
{
    // ini nama nya objek dari class Mahasiswa. -> nama objek: data1, nama class: Mahasiswa
    Mahasiswa data1;
    Mahasiswa data2;

    data1.nama = "ucup";
    data1.NIM = "13305041";
    data1.jurusan = "Teknik";
    data1.IPK = 2;
    
    data2.nama = "otong";
    data2.NIM = "1350321";
    data2.jurusan = "Bahasa";
    data2.IPK = 5;

    
    cout << "nama dari data1: " << data1.nama << endl;
    cout << "NIM dari data1: " << data1.NIM << endl;
    cout << "jurusan dari data1: " << data1.jurusan << endl;
    cout << "IPK dari data1: " << data1.IPK << "\n" << endl;


    cout << "nama dari data2: " << data2.nama << endl;
    cout << "NIM dari data2: " << data2.NIM << endl;
    cout << "jurusan dari data2: " << data2.jurusan << endl;
    cout << "IPK dari data2: " << data2.IPK << endl;

    return 0;
}
