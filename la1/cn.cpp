#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,c=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = -1e9;
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(max==arr[i]){
            c++;
        }
    }
    
    cout << c;
    return 0;
}
