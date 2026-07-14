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

    int getAge() { return age; }
    void setAge(int a) { age = a; }
};
int main()
{
    Hero temp(75, 'c');
    cout << "level is: " << temp.level << endl;
    cout << "health is: " << temp.health << endl;
    return 0;
}