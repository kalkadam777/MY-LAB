#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Car
{
private:
	string company, model, date, color;
	double maxSpeed;
	int numOfSeats, numOfDoors;

public:

	Car(string company, string model, string date, string color, double maxSpeed, int numOfSeats, int numOfDoors) {
		this->company = company;
		this->model = model;
		this->date = date;
		this->color = color;
		this->maxSpeed = maxSpeed;
		this->numOfDoors = numOfDoors;
		this->numOfSeats = numOfSeats;
	}

	string toString() {
		return company + ' ' + model + ' ' + color + ' ' + date + ' ' + to_string(maxSpeed) + ' '
			+ to_string(numOfSeats) + ' '+to_string(numOfDoors);
	}

	string tableContent() {
		return
			"Car: " + company + ' ' + model + '\n'
			+ "Type: " + color
			+ "\nSeats: " + to_string(numOfSeats)
			+ "\nDoors: " + to_string(numOfDoors)
			+ "\nMax Speed: ~" + to_string(maxSpeed);

	}

	void setCompany(string company) {
		this->company = company;
	}
	string getCompany() {
		return company;
	}

	void setModel(string model) {
		this->model = model;
	}
	string getModel() {
		return model;
	}

	void setDate(string date) {
		this->date = date;
	}
	string getDate() {
		return date;
	}

	void setColor(string color) {
		this->color = color;
	}
	string getColor() {
		return color;
	}

	void setMaxSpeed(double maxSpeed) {
		this->maxSpeed = maxSpeed;
	}
	double getMaxSpeed() {
		return maxSpeed;
	}

	void setNumOfSeats(int numOfSeats) {
		this->numOfSeats = numOfSeats;
	}
	int getNumOfSeats() {
		return numOfSeats;
	}

	void setNumOfDoors(int numOfDoors) {
		this->numOfDoors = numOfDoors;
	}
	int getNumOfDoors() {
		return numOfDoors;
	}
};
int main() {
	Car c1 = Car("Tayota","Camry","2021","White",183.7,4,5);
	cout << c1.tableContent() << endl << endl;

	Car c2 = Car("Chevrole", "Cobalt", "2004", "Grey", 150.1, 4, 5);
	cout << c2.tableContent();

    Car c3 = Car("Kamaz", "Selhoznik", "1989", "Yellow", 87.5, 3, 2);
    cout << c3.tableContent();

    Car c4 = Car("Daewoo", "Nexia", "2012", "Silver", 160.5, 4, 5);
    cout << c4.tableContent();

    Car c5 = Car("Kirovez", "K700","1991", "Yellow", 45.6, 2, 2);
    cout << c5.tableContent();
    return 0;
}