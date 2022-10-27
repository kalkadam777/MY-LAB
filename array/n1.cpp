#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,d,n,c=0;
    cin >> n >> a >> d;

    
    int* arr = new int[n];

    for(int i=0; i < n; i++){
        arr[i] = a+i*d;
    }

    for(int i=0; i < n; i++){
        cout << arr[i] << ' ';
        c+=arr[i];
    }
    cout << endl << "sum: " << c;
    return 0;
}
