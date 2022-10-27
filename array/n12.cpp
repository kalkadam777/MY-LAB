#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n;i++){
        arr[i] = i;
        cout << arr[i] << ' ';
    }
    cout << endl;
    for(int i=0; i<n;i+=2){
        arr[i] = i;
       cout << arr[i] << ' ';
    }
    return 0;
}