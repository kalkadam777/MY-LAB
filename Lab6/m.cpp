#include <iostream>

using namespace std;
void massive(int n,int* arr){
    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << ' ';
    }
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    massive(n,arr);
    return 0;
}