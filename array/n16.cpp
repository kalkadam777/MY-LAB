#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int main (){
    srand(time(0));
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%21;
        cout << arr[i] << ' ';
    }
    cout << endl;
    for(int i=1;i<n;i++){
        if(i%2==0){
            cout << arr[i] << ' ';
        }
    }
    cout << endl;
    for(int i=1; i<n; i++)
    {
         if (i%2==1){
                cout << arr[i] << ' ';
            }
    }
    return 0;
}