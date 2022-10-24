#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int main(){
    int n,c=0;
    cin >> n;
    int* arr = new int[n];

    for(int i=1; i < n; i++){
       arr[i]=i;
       cout << arr[i] << ' ';
    }
    cout << endl;
    for(int i=n-1; i >= 0; i--){
        arr[i]=i*2+1;
        cout << arr[i] << ' ';
        c++;
    }
    cout << endl << c;
    return 0;
}