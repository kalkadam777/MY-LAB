#include <iostream>

using namespace std;
 
class MyClass {
    public:
    int myNum;
    string Mystring;
};

int main(){
    MyClass myObj;
    myObj.myNum = 15;
    myObj.Mystring = "City";
    cout <<myObj.myNum << " " <<myObj.Mystring;
    return 0;
}
// #include <iostream>

// using namespace std;
//     class Myclass{
//         public:
//         Myclass(){
//             cout << "Hello Alzhan";
//         }
//     };

// int main(){
//     Myclass myobj;
//     return 0;
// }