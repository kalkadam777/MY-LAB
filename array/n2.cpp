#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int mtx[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mtx[i][j];
        }
    }
    int max=mtx[0][0],imax=1,jmax=1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(max<mtx[i][j]){
                max=mtx[i][j]; 
                imax=i+1;
                jmax=j+1;
            }
        }
    }
    cout << imax << " " << jmax;



    return 0;
}
    
