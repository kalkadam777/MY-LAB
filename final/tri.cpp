#include <iostream>

using namespace std;
// i==j main diag
// i==n-1-j sec
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < 2*n; i++)
    {
        for (int j = 0; j < 4*n-1; j++)
        {
            if (i==4*n-1-j and i>n)
            {
                cout << "*";
            }
            
           else if (i-1==j and i>n)
            {
                cout << "*";
            }
            
            else if (i == n-1 and j>n and j<3*n-1)
            {
                cout << "*";
            }
            
           else if (i == 2*n-1-j)
            {
                cout << "*";
            }
            
           else if (i+2*n-1==j)
            {
                cout << "*";
            }
            
            else if(i == 2*n-1 and j != (4*n-1)/2){
                cout << "*";
            }
            else{
                cout << " ";
            }
           
        }
        cout << endl;
    }
    return 0;
}