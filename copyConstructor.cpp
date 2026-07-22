#include <iostream>
#include <string.h>
using namespace std;
class Hero
{
private:
    int age;

public:

    char *name;
    char level;

    Hero()
    {
        cout << "constructor called" << endl;
        name = new char[100];
    }

    ~Hero(){

    cout<< "destructor called" << endl;
 };
    // parameterized constructor

    Hero(int health, char level)
    {

        cout << "param constructor called" << endl;
        this->health = health;
        this->level = level;
    }

    // copy constructor

    Hero(Hero& temp)
    {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch , temp.name);
        this -> name = ch;

        cout << "copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "[ name is: " << this->name << " ";
        cout << "health is: " << this->health << " ";
        cout << "level is: " << this->level << " ]"<< endl;
    }

    int health;
    // char level;

    char getName(){ return *name;}

    void setName(char name[]) {
        strcpy(this-> name, name);
    }

    int getHealth(){ 
        return health;}

    void setHealth(int health){ 
        this-> health = health;}

    int getAge() { return age; }
    void setAge(int a) { age = a; }
};



int main()
{
    Hero hero1;
    hero1.setAge(20);
    hero1.setHealth(80);
    hero1.level = 'A';
    char name[6] = "mohan";

    hero1.setName(name);
    // strcpy(hero1.name, "mohan");

    // hero1.print();

    Hero hero2(hero1);
    // hero2.print();

    hero1.name[0] = 'S';
    hero1.print();

    hero2.print();

    cout << "copy assgnment " << endl;
    hero1 = hero2;

     hero1.print();

    hero2.print();


    





    return 0;
}