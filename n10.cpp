#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i=0; i<n; i++){
        arr[i] = i;
        cout << arr[i] << ' ';
    }
    cout << endl;
    for (int i=0; i<n; i++){
       if(arr[i]%2==0){
         cout << arr[i] << ' ';
       } 
    }
    cout << endl;
    for (int i=n-1; i>0; i--){
        if (arr[i]%2==1){
            cout << arr[i] << ' ';
        }
    }
    return 0;
}