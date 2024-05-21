#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
        double health;

    public:
        // Constructor
        Hero(const char* name, double health){
            this->name = name;
            this->health = health;
        }


        // Destructor
        ~Hero(){
            this->name = name;
            this->health = health;
        }


}

int main(int argc, char const *argv[])
{
    
    return 0;
}
