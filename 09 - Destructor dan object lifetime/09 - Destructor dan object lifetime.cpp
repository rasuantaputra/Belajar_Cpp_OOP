#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string nama;

        // ini nama nya constructor (lihat tutorial 04 - Constructor)
        Player(const char *nama){
            Player::nama = nama;
            cout <<"player " << Player::nama << " dibuat" << endl;
        }

        // ini nama nya destructor
        ~Player(){
            cout <<"player " << Player::nama << " dihapus" << endl;
        }
};

void membuatPlayerStack(){
    Player stackPlayer2 = Player("stack");
}

void membuatPlayerHeap(){
    Player *heapPlayer2 = new Player("heap");
}

void membuatPlayerStackPointer(Player * &playerPointer){
    Player stackPlayer = Player("stack");
    playerPointer = &stackPlayer;
}

void membuatPlayerHeapPointer(Player * &playerPointer){
    Player *heapPlayer = new Player("heap");
    playerPointer = heapPlayer;
}

int main(int argc, char const *argv[])
{
    // kalau di simpan pada stack memory akan otomatis dihapus setelah tanda "}" -> berlaku untuk semua !!!
    {
        Player stackPlayer = Player("stack");
    }

    // ini di letakan di heap memory, jd ga otomatis di hapus
    // kita harus hapus manual
    {
        Player* heapPlayer = new Player("heap");
        // ini cara menghapus nya
        // setaip bikin "new" harus kita delete
        delete heapPlayer;
    }

    membuatPlayerStack();
    membuatPlayerHeap();

    // simulai memory leak
    cout << "\nMemory Leak" << endl;
    Player *playerPointer1;
    membuatPlayerStackPointer(playerPointer1);
    cout << playerPointer1->nama << endl; // tidak terjadi apa-apa
    
    Player *playerPointer2;
    membuatPlayerHeapPointer(playerPointer2);
    cout << playerPointer2->nama << endl; // tidak terjadi apa-apa
    
    perlu di ulang tutorialnya, belum paham
    
    return 0;
}
