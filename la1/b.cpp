#include <iostream>
#include <cmath>

using namespace std;
void Digit(int n){
    int a[n],b[n],d[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                d[i] = abs(a[i]-b[j]);
            }
            
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << d[i] << ' ';
    }
    
    
}

int main(){
    int n;
    cin >> n;
    Digit(n);
    return 0;
}