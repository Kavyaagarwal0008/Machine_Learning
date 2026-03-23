// Define an interface using an abstract class

#include <iostream>
using namespace std;

// Defining an interface
class Vehicle {
public:
    virtual void start() = 0; // Pure virtual function
    virtual void stop() = 0;  // Pure virtual function
};

// STEP2
// Implementing the Vehicle interface in a Car class
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car is starting..." << endl;
    }
    
    void stop() override {
        cout << "Car is stopping..." << endl;
    }
};

// Step 3
int main(){
    Vehicle* mycar = new Car(); //Polymorphism : Interface refrences

    mycar->start();
    mycar->stop();

    delete mycar; //clean memory

    return 0;

}

// Output
// Car is starting...
// Car is stopping...