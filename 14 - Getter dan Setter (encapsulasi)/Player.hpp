#ifndef __PLAYER
#define __PLAYER

#include <string>

class Player{
    private:
        std::string name;
        double attackPower;
        int level;
        int exp;

    public:
    Player(const char *name);

    // getter : ini artinya kita akan membuat attribute menjadi read only
    std::string gateName();
    
    // setter : untuk write data ke class
    // kita gamau ngerubah 'level' secara langsung, tapi kita ubah si 'level' seiring bertambahnya 'exp'
    
    void addExperience(int);
    void display();
};

#endif