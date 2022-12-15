#include <iostream>

using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y,int z){
        brand = x;
        model = y;
        year = z;
    }
};
int main(){
    Car carObj ("BMW", "X5", 2000);
    Car carObj1 ("Tayota", "Camry", 2005);
    cout << carObj.brand << ' ' << carObj.model << ' ' << carObj.year << endl;
    cout << carObj1.brand << ' ' << carObj1.model << ' ' << carObj1.year << endl;
    return 0;
}
