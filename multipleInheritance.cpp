#include <iostream>
using namespace std;

class landVehicle{

    public:

    int number;

    public:

    void landInfo(){
        
        cout << "works on land only" <<endl;

    }
};

class waterVehicle{

    public:

    void waterInfo(){

                cout << "works in water only" <<endl;

    }


};

class Amphibian : public landVehicle, public waterVehicle{

};

int main(){

    Amphibian d;
    d.landInfo();
    d.waterInfo();
    d.number = 5;

    cout << "number of vehicel is: " << d.number << endl;


    return 0;
}