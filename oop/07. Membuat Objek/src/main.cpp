#include <string>
#include <iostream>
using namespace std;

class DenganConstructor{
    public:
        string name;

        DenganConstructor(const char* name)
        {
            DenganConstructor::name = name;
        }

        void showData()
        {
            cout << "Ini " << name << endl;
        }
};

class TanpaConstructor{
    public:
        string name;

        
        void showData()
        {
            cout << "Ini " << name << endl;
        }

};


int main(int argc, char const *argv[])
{

    // Cara Membuat object tanpa constructor
    // memory stack
    TanpaConstructor object1;
    object1.name = "object 1";
    object1.showData();

    // Cara Membuat object dengan constructor
    // memory stack
    DenganConstructor object2 = DenganConstructor("object 2");
    object2.showData();

    DenganConstructor object3("object 3");
    object3.showData();

    // memory heap
    DenganConstructor* object4 = new DenganConstructor("object 4");
    (*object4).showData();  // Menampilkan dengan cara derefence
    object4->showData(); // Menampilkan dengan cara arrow operator
    cout << object4->name << endl; // Menampilkan dengan cara biasa


    return 0;
}
