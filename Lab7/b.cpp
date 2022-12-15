#include <iostream>

using namespace std;
string binary(int n){
    if(n==0){
        return "0";
    }
        else if(n==1){
        return "1";
        }
        else{
            return binary(n/2)+binary(n%2);
        }
}
int main(){
    int n;
    cin >> n;
    cout << binary(n);
    return 0;
}