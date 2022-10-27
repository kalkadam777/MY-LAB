#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int* arr = new int[n]; 
    arr[0] = a;
    arr[1] = b;
    for(int i=1; i < n; i++){
      
       arr[i] = arr[i-2] + arr[i-1];
    }

    for(int i=0; i < n; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}
