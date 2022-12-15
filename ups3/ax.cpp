#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count[1001]={0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    int max=count[0],imax=0;
    for (int i = 1; i <= 1001; i++)
    {
        if (max<count[i])
    {
        max=count[i];
        imax = i;
    }
    }
    for (int i = 1001; i >=1; i--)
    {
        if (count[i]==max)
        {
            cout << i << ' ';
        }
        
    }
    return 0;
}