#include <iostream>

using namespace std;

int main (){
    int n,t,c=0;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    cin >> t;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        if(i==j and  t>=a[i] and t<=b[j]){
            c++;
        }
       }
    
    }
    cout << c <<' ';
    return 0;
}