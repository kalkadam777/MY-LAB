#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    arr[0] = 1;
    arr[1] = 1; 
    for(int i=2; i < n; i++){
      
       arr[i] = arr[i-2] + arr[i-1];
    }

    for(int i=0; i < n; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}
