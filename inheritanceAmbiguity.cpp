#include <iostream>
using namespace std;

class landVehicle{

    public:

    int chassis;

    public:

    void landInfo(){
        
        cout << "works on land only" <<endl;

    }

    void vehicleNo(){

        cout << "land vehc number is not defined" << endl;
    }
};

class waterVehicle{

    public:

    void waterInfo(){

                cout << "works in water only" <<endl;

    }

    void vehicleNo(){

        cout << "water vehc number is not defined" << endl;
    }


};

class Amphibian : public landVehicle, public waterVehicle{

};

int main(){

    Amphibian d;
    d.landInfo();
    d.waterInfo();
    d.chassis = 5;


    cout << "number of vehicle is: " << d.chassis << endl;
    d.waterVehicle :: vehicleNo();

    return 0;
}