#ifndef __PLAYER // biar kalau sudah di include, ga di include ulang -> detail di https://www.youtube.com/watch?v=qgGrNIEAIdw&list=PLZS-MHyEIRo4Ze0bbGB1WKBSNMPzi-eWI&index=81
#define __PLAYER
#include <string>

class Player{
    public:
        std::string name;

        // constructor dengan prototype
        Player(const char *);
        void display();
        std::string getName();
        void setName(const char *);
};

#endif