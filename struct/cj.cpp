#include <iostream>

using namespace std;
class MyClass{
    public:
    int speed(int MaxSpeed);
};

    int MyClass::speed( int MaxSpeed){
    return MaxSpeed;
    }
int main(){
    MyClass myObj;
    int x;
    cin >> x;
   cout << myObj.speed(x);
    return 0;
}