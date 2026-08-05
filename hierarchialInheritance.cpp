#include <iostream>
using namespace std;

class landVehicle{

    public:

    int number;


    public:

    void landInfo(){
        
        cout << "moves on road" <<endl;

    }
};

class Car: public landVehicle{

    public:

    void CarInfo(){

                cout << "4 wheeler" <<endl;

    }


};

class Bus : public landVehicle{
    
    void BusInfo(){
        cout<< "6 wheeler" << endl;
    }

};

int main(){

    Car Toyota;
    Toyota.landInfo();
    Toyota.CarInfo();

    Bus Tata;
    Tata.landInfo();

    Toyota.number = 5;
    Tata.number = 10;

    cout << "number of car is: " << Toyota.number << endl;
    cout << "number of bus is: " << Tata.number << endl;


    return 0;
}