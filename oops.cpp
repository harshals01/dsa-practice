#include <iostream>
using namespace std;

class Hero
{

private:
    int age;

public:
    Hero()
    {
        cout << "constructor called" << endl;
    }

    // parameterized constructor

    Hero(int health, char level)
    {
                cout << "param constructor called" << endl;

        this->health = health;
        this->level = level;
    }

    int health;
    char level;

    int getAge()
    {
        return age;
    }

    void setAge(int a)
    {
        age = a;
    }
};

int main()
{

    // static allocation

    Hero ramesh;

    ramesh.level = 'a';
    ramesh.health = 80;
    ramesh.setAge(20);

    cout << "size is: " << sizeof(ramesh) << endl;
    cout << "level is: " << ramesh.level << endl;
    cout << "health is: " << ramesh.health << endl;
    cout << "age is: " << ramesh.getAge() << endl;

    // dynamic allocation

    Hero *mohan = new Hero;

    mohan->level = 'b';
    mohan->setAge(25);
    mohan->health = 90;

    cout << "size of mohan is : " << sizeof(mohan) << endl;
    cout << "level is: " << mohan->level << endl;
    cout << "health is: " << mohan->health << endl;
    cout << "age is: " << mohan->getAge()<<endl;


    return 0;
}