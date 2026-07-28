#include <iostream>
using namespace std;
class Person {

    public: 
    string name;
    int height;
    int weight;
    int Age;


    public:
    
        int getAge() {
            return this ->Age;
        }

        void setweight(int w) {
        this -> weight = w;
    }
};

    class Male: public Person{

        public:
        string color;

        void sleep(){

            cout << "male sleeping" << endl;
        }
    };

   


int main() {

   Male obj1;


    obj1.name= "Rahul";
    obj1.height = 5;
    obj1.weight = 50;
    obj1.Age= 18;
    obj1.setweight(45);
    obj1.color = "white";

    cout << "Student Name : " << obj1.name << endl;
    cout << "Student Rollno : " << obj1.height << endl;
    cout << "Student Age : " << obj1.getAge() << endl;
    cout << "Student weight : " << obj1.weight << endl;
    cout << "Student color : " << obj1.color << endl;
    obj1.sleep();
}

