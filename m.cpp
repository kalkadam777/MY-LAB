#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int main(){
    srand(time(0));
    int n;
    cin >> n;
    int* arr = new int[n];

    for(int i=0; i < n; i++){
        arr[i] = i*2+1;
    }

    for(int i=0; i < n; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}
