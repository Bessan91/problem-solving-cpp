#include <iostream>
#include <string>
using namespace std;


// ================= VEHICLE =================

class Vehicle
{
private:
    string Model;
    string Reg_number;
    int Speed;
    double Fule_capacity;
    double Fule_consumption;

public:

    // Default Constructor
    Vehicle()
    {
        Model = "";
        Reg_number = "";
        Speed = 0;
        Fule_capacity = 0;
        Fule_consumption = 0;
    }

    // Parameterized Constructor
    Vehicle(string model, string reg_number, int speed,
            double fuel_capacity, double fuel_consumption)
    {
        Model = model;
        Reg_number = reg_number;
        Speed = speed;
        Fule_capacity = fuel_capacity;
        Fule_consumption = fuel_consumption;
    }

    // Setters
    void setModel(string model)
    {
        Model = model;
    }

    void setReg_number(string reg_number)
    {
        Reg_number = reg_number;
    }

    void setSpeed(int speed)
    {
        Speed = speed;
    }

    void setFule_capacity(double fuel_capacity)
    {
        Fule_capacity = fuel_capacity;
    }

    void setFule_consumption(double fuel_consumption)
    {
        Fule_consumption = fuel_consumption;
    }

    // Getters
    string getModel()
    {
        return Model;
    }

    string getReg_number()
    {
        return Reg_number;
    }

    int getSpeed()
    {
        return Speed;
    }

    double getFule_capacity()
    {
        return Fule_capacity;
    }

    double getFule_consumption()
    {
        return Fule_consumption;
    }

    // Calculate fuel needed
    double fuelNeeded(int dis)
    {
        return Fule_consumption * dis;
    }

    // Calculate distance
    double distanceCovered(int hours)
    {
        return Speed * hours;
    }

    // Display
    virtual void display()
    {
        cout << "Model: " << Model << endl;
        cout << "Registration Number: " << Reg_number << endl;
        cout << "Speed: " << Speed << endl;
        cout << "Fuel Capacity: " << Fule_capacity << endl;
        cout << "Fuel Consumption: " << Fule_consumption << endl;
    }
};


// ================= TRUCK =================

class Truck : public Vehicle
{
private:
    int cargo_weight_limit;

public:

    // Default Constructor
    Truck()
    {
        cargo_weight_limit = 0;
    }

    // Parameterized Constructor
    Truck(string model, string reg_number, int speed,
          double fuel_capacity, double fuel_consumption,
          int cargo_weight_limit)
        : Vehicle(model, reg_number, speed,
                  fuel_capacity, fuel_consumption)
    {
        this->cargo_weight_limit = cargo_weight_limit;
    }

    // Setter
    void setCargo_weight_limit(int weight)
    {
        cargo_weight_limit = weight;
    }

    // Getter
    int getCargo_weight_limit()
    {
        return cargo_weight_limit;
    }

    // Display
    void display()
    {
        Vehicle::display();

        cout << "Cargo Weight Limit: "
             << cargo_weight_limit << endl;
    }
};


// ================= BUS =================

class Bus : public Vehicle
{
private:
    int Number_of_passengers;

public:

    // Default Constructor
    Bus()
    {
        Number_of_passengers = 0;
    }

    // Parameterized Constructor
    Bus(string model, string reg_number, int speed,
        double fuel_capacity, double fuel_consumption,
        int number_of_passengers)
        : Vehicle(model, reg_number, speed,
                  fuel_capacity, fuel_consumption)
    {
        Number_of_passengers = number_of_passengers;
    }

    // Setter
    void setNumber_of_passengers(int n)
    {
        Number_of_passengers = n;
    }

    // Getter
    int getNumber_of_passengers()
    {
        return Number_of_passengers;
    }

    // Display
    void display()
    {
        Vehicle::display();

        cout << "Number of Passengers: "
             << Number_of_passengers << endl;
    }
};


// ================= MAIN =================

int main()
{
    Vehicle vehicle(
        "BMW",
        "1234",
        100,
        60,
        0.1
    );

    Truck truck(
        "Volvo",
        "5678",
        80,
        200,
        0.2,
        5000
    );

    Bus bus(
        "Mercedes",
        "9999",
        90,
        150,
        0.15,
        50
    );


    cout << "===== VEHICLE =====" << endl;
    vehicle.display();


    cout << "\n===== TRUCK =====" << endl;
    truck.display();


    cout << "\n===== BUS =====" << endl;
    bus.display();


    return 0;
}
