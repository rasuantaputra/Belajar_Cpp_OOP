#include <iostream>
#include <string>

#include "Mahasiswa.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Mahasiswa *mahasiswa1 = new Mahasiswa("Ucup");

    cout << mahasiswa1->namePublic << endl; // dapat di akses karena public
    // cout << mahasiswa1->namePrivate << endl; // tidak dapat di akses karena private

    Mahasiswa *mahasiswa2 = new Mahasiswa("Marisa");
    mahasiswa2->showDisplay(); // ini bisa dilakukan karena walau attribute nya "Private" sudah di ambil ke "Public" duluan sama method "showDisplay()"
    // mahasiswa2->showDisplayPrivat(); // tidak bisa di lakukan karena "Private"

    delete mahasiswa1;
    return 0;
}
