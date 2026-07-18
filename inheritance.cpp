#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    public:
        string name;
        string model;
        int noOfTyres;

        Vehicle(string _name, string _model, int _noOfTyres){
            this->name = _name;
            this->model = _model;
            this->noOfTyres = _noOfTyres;
        }

    public:
        void start_engine(){
            cout << "Starting engining";
        }
        void stop_engine(){
            cout << "Engine is stopping" << name << " " << model << '\n';
        }
};

class Car : public vehicle {
        public:
        int noOfDoors;
        string transmissionType;

        void startAC(){
            cout << "AC has started of " << name << '\n';
        }
}
int main(){
    
    return 0;
}