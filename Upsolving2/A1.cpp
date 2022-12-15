#include <iostream>

using namespace std;

int main(){
    int n,rez=0,c=0,rez1=0,c1=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
            rez+=arr[i];
            c++;
        }
        else if(arr[i]%2==1){
            rez1+=arr[i];
            c1++;
        }
    }
    cout << "Left hand magic power: " << rez*c << endl;
    cout << "Right hand magic power: " << rez1*c1 << endl;
    return 0;
}