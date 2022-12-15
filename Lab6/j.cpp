#include <iostream>

using namespace std;
void Max(int* arr,int max){
    for (int i = 0; i < 4; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout << max;
}

int main (){
    int arr[4];
    int max = -1e9;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
   Max(arr,max);
    return 0;
}