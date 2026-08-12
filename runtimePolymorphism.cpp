#include <iostream>
using namespace std;

class Animal
{

public:
    string name;

public:
    void speak()
    {

        cout << "speaking " << endl;
    }
};

class Dog : public Animal
{

    public:
    // void speak()
    // {

    //     // cout << "barking " << endl;
    // }
};

int main()
{

   Animal a;
   a.speak();

   Dog d;
   d.speak();

    return 0;
}