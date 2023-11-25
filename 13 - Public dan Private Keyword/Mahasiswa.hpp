#ifndef __MAHASISWA // tujuannya kalo di define kebanyakan di main file tidak error
#define __MAHASISWA

#include <string>

class Mahasiswa{
    public: // ini dapat di akses di luar class
        std::string namePublic;

    private: // ini hanya bisa di akses di dalam class
        std::string namePrivate;

    public:
        // constructor selalu public
        Mahasiswa(const char *name);
        void showDisplay();

    private:
        void showDisplayPrivate();
};

#endif