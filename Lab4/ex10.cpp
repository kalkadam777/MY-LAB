#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int min = n % 10;
    int max = n % 10; 
    n/=10;
    while (n > 0){
       
        if(n % 10 > max){
            max = n % 10;
        }
        else if (n % 10 < min){
            min = n % 10;
        }
        n/=10;
    }
    cout << max << ' ' << min;
    return 0;
}