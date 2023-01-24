#include <iostream> 
using namespace std; 
int main(){ 
    int n; 
    cin>>n; 
    	
    for (int i=0; i<2*n; i++){ 
         for (int j=0; j< 4*n-1 ; j++){ 
            if( (i + j == 2 * n-1) || ((i+2*n-1)==j)){ 
                cout << '*'; 
            }else if(i == n - 1 && j>=n && j <= 3 * n - 2  ){ 
                cout << '*'; 
            }else if(i == 2*n-1 &&  j!=(2*(2*n-1)+1)/2  ){ 
                cout << '*'; 
            }else if( (i == j + 1 || i == 4 * n - 1 - j) && i > n) { 
                cout << '*'; 
            }else{ 
                cout<<' '; 
            }     
    } 
    cout<<endl; 
    } 
    return 0; 
}
