#include <iostream>
using namespace std;

class landVehicle{

    public:

    string vehicleType;

    public:

    void landInfo(){
        
        cout << "works on land only" <<endl;

    }

    void landInfo(string vehicleType){

        cout << "land vehc number is not defined" << endl;
        cout << "vehicle type: " << vehicleType <<endl;
    }
};


int main(){

    landVehicle car;
    car.landInfo("car");
   
    return 0;
}