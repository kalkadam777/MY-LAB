#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
};

int main(){
    Car carObj1;
    carObj1.brand = "Daewoo";
    carObj1.model = "Nexia";
    carObj1.year = 2012;
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    Car carObj2;
    carObj2.brand = "Kamaz";
    carObj2.model = "Selhoznik";
    carObj2.year = 1989;
    cout << carObj2.brand << ' ' << carObj2.model << " " << carObj2.year;
    return 0;
}