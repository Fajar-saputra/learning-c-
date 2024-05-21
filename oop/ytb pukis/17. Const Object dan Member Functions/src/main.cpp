#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
    public:
        Hero(const char* name)
        {
            this->name = name;
        }


    void show()
    {
        cout << "Nama : " << this->name << endl;
    }

    void show() const
    {
        cout << "Nama : " << this->name << endl;
    }

    string getName(){
        return this->name;
    }

    void setName(const char* name)
    {
        this->name = name;
        cout<< "Set Name : " << name << endl;
    }
};

int main(int argc, char const *argv[])
{
    Hero *hero1 = new Hero("Dudu");
    hero1->show();

    const Hero *hero2 = new Hero("dada");
    hero2->show();

    hero1->setName("dede");
    hero2->setName("dodo"); // tidak bisa dilakukan karena konstan

    cout << endl;
    return 0;
}
