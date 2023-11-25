#include <iostream>
#include <string>

class Hero{
    friend std::ostream &operator << (std::ostream &output, const Hero &hero);
    friend std::istream &operator >> (std::istream &input, Hero &hero);
    private:
        std::string name;

    public:
        void setName(std::string name){
            this->name = name;
        }

        void display(){
            std::cout <<"Name: " << this->name << std::endl;
        }
};

std::ostream &operator << (std::ostream &output, const Hero &hero){
    
    output << "Name: " << hero.name << std::endl;
    return output;
}

std::istream &operator >> (std::istream &input, Hero &hero){
    input >> hero.name;
    return input;
}

int main(int argc, char const *argv[])
{
    Hero hero1;
    hero1.setName("Ucup");
    hero1.display();

    std::cout<< hero1;

    Hero hero2;
    std::cout << "Masukan nama hero: ";
    std::cin >> hero2;

    std::cout << hero2;   
    
    return 0;
}
