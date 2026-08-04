#include <iostream>
using namespace std;

class Animal{

    public:

    int age;
    string type;

    public:

    void speak(){
        
        cout << "speaking" <<endl;

    }
};

class Dog: public Animal{


};

class Labrador : public Dog{

};

int main(){

    Dog d;
    d.speak();
    cout << d.age << endl;
    cout << d.type;

    Labrador sheru;
    sheru.speak();


    return 0;
}