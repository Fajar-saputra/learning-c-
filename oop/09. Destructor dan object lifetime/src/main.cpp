#include <iostream>
#include <string>
using namespace std;

class Player{
    public:
        string name;

        // Constructor
        Player(const char* name)
        {
            Player::name=name;
            cout << "Player " << Player::name << " dibuat!\n";
        }

        // Destructor
        ~Player()
        {
            cout << "Player " << Player::name << " dihapus!\n";
        }
};

void membuatPlayerStack()
{
    Player stackPlayer=Player("stack");
}

void membuatPlayerHeap()
{
    Player* heapPlayer = new Player("heap");
    delete heapPlayer;
}

void membuatPlayerStackPointer(Player* &playerPointer)
{
    Player stackPointer = Player("stack");
    playerPointer = &stackPointer;
}

void membuatPlayerHeapPointer(Player* &playerPointer)
{
    Player* heapkPointer = new Player("heap");
    playerPointer = heapkPointer;
    delete heapkPointer;
}

Player playerReturnStack()
{
    Player stackPlayer = Player("stack di create");
    return stackPlayer;
}

Player playerReturnHeap()
{
    Player* heapPlayer = new Player("heap di create");
    return heapPlayer;
}

int main(int argc, char const *argv[])
{

    membuatPlayerStack();
    membuatPlayerHeap();


    cout << "\nSimulasi linking memory" << endl;
    Player* stackPointer;
    membuatPlayerStackPointer(stackPointer);
    cout<<(*stackPointer).name<<endl;

    Player* heapPointer;
    membuatPlayerHeapPointer(heapPointer);
    cout << heapPointer->name <<endl;

    cout << "\nReturn Object" << endl;
    Player playerReturnStack = membuatPlayerStack();


    return 0;
}
