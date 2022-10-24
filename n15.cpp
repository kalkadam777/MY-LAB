#include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    int*arr = new int[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%21-10;
        cout << arr[i] << ' ';
    }
    cout << endl;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            cout << arr[i] << ' ' << arr[i];
        }
    }
    return 0;
}