#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int main(){
    srand(time(0));
    int a,d,n;
    cin >> n >> a >> d;

    
    int* arr = new int[n];

    for(int i=0; i < n; i++){
        arr[i] = a*pow(d,i);
    }

    for(int i=0; i < n; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}
