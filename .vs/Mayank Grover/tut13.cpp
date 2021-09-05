#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void StartVehicle() = 0;
    virtual void StopVehicle() = 0;

    virtual int GetEngine() = 0;
    virtual void SetEngine(int engine) = 0;
    virtual string GetVehicleType() = 0;
};

// enum VehicleType
// {
//     Car,
//     Bike,
//     Train,
// };

class BaseVehicle : public Vehicle
{
private:
    int engine;
    int capacity;
    int doors;

public:
    BaseVehicle(int eng, int cap, int dr)
    {
        engine = eng;
        capacity = cap;
        doors = dr;
    }

    virtual string GetVehicleType()
    {
        return "BaseVehicle";
    }
    virtual void StartVehicle()
    {
        // cout << "\n Starting Vehicle: BaseVehicle";
        cout << "\n Starting Vehicle: " << GetVehicleType();
    }

    virtual void StopVehicle()
    {
        // cout << "\n Stoping Vehicle: BaseVehicle";
        cout << "\n Stoping Vehicle: " << GetVehicleType();
    }

    int GetEngine()
    {
        return engine;
    }

    void SetEngine(int eng)
    {
        engine = eng;
    }
};

class Car : public BaseVehicle
{

public:
    Car(int eng, int cap, int dr) : BaseVehicle(eng, cap, dr)
    {
    }

    string GetVehicleType()
    {
        return "Car";
    }

    // void StartVehicle()
    // {
    //     cout << "\n Starting Vehicle: Car";
    // }

    // void StopVehicle()
    // {
    //     cout << "\n Stoping Vehicle: Car";
    // }
};

class Bike : public BaseVehicle
{
public:
    Bike(int eng, int cap, int dr) : BaseVehicle(eng, cap, dr)
    {
    }

    string GetVehicleType()
    {
        return "Bike";
    }
    // void StartVehicle()
    // {
    //     cout << "\n Starting Vehicle: Bike";
    // }

    // void StopVehicle()
    // {
    //     cout << "\n Stoping Vehicle: Bike";
    // }
};

class Train : public BaseVehicle
{

public:
    Train(int eng, int cap, int dr) : BaseVehicle(eng, cap, dr)
    {
    }

    string GetVehicleType()
    {
        return "Train";
    }
    // void StartVehicle()
    // {
    //     cout << "\n Starting Vehicle: Train";
    // }

    // void StopVehicle()
    // {
    //     cout << "\n Stoping Vehicle: Train";
    // }
};

int main()
{

    Vehicle *vehicle;

    // lobby / menu
    vehicle = new Car(1, 5, 4);

    // gameplay
    vehicle->StartVehicle();
    vehicle->StopVehicle();
    vehicle->GetEngine();

    // Car car;
    // car.SetEngine();
    // car.GetEngine();

    vehicle = new Bike(2, 2, 0);
    vehicle->StartVehicle();
    vehicle->StopVehicle();

    vehicle = new Train(3, 1000, 100);
    vehicle->StartVehicle();
    vehicle->StopVehicle();

    return 0;
}