#include <iostream>

using namespace std;

int main(){
    int n,c=0;
    while (n!=0)
    { 
        cin >> n;
        if(c<n)
        {
        c = n;
        }
        else 
        {
            n=n;
        }
        
    }
    cout << c;
    return 0;   
}