#include <iostream>
using namespace std;

class Car {

private:
    int prize;
    bool available;

public:
    string modelName;
    int year;


    Car(string model, int year, int prize, bool available) {
        this->modelName = model;
        this->year = year;
        this->prize = prize;
        this->available = available;
    }


    void setPrize(int prize) {
        this->prize = prize;
    }

    int getPrize() {
        return this->prize;
    }

    void setAvail(bool available) {
        this->available = available;
    }

    bool getAvail() {
        return this->available;
    }

    // Display details
    void getDetails() {
        cout << "Model: " << modelName << endl;
        cout << "Year: " << year << endl;
        cout << "Prize: $" << prize << endl;
        cout << "Available: " << (available ? "Yes" : "No") << endl;
    }



    void sellCAr(){
        if(available){
            this->available = false;
            cout << "CAr is sold out " << endl;
        }
        else{
            cout << "Car is Available" << endl;
        }
    }

    void Car(string model, int year, int prize) {
        modelName = model;
        year = year;
        prize = prize;
        available = true;
    }

    ~Car(){
        cout << "The Object is destructed" << endl;
    }
};

int main() {

    Car a("Bentley201", 2024, 200000, true);

    // Update prize and availability
    a.setPrize(250000);
    a.setAvail(true);

    // Display the car details
    a.getDetails();

    cout << "The New details are:" << endl;
    a.setAvail(false);
    a.getDetails();

    return 0;
}
