#include <iostream>

using namespace std;
class MyClass {
    public:
   void myMethod(){
        cout << "Hello Class";
    }
};

int main(){
    MyClass myObj1;
    myObj1.myMethod();
    return 0;
}