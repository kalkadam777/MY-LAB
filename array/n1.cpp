#include <iostream>

using namespace std;

int main(){
    int n,c=1;
    cin >> n;
    int mtx[n][n];
    for(int s = 0; s < n/2.0; s++){
        for(int j = 0+s; j < n-s; j++){
        mtx[s][j] = c++;
    }
    
     for(int i = 1+s; i < n-s; i++){
       mtx[i][n-1-s] = c++;
    }
    
    for(int j = n-2-s; j >=s; j--){
        mtx[n-1-s][j] = c++;
    }
    
    for(int i = n-2-s; i >= 1+s; i--){
       mtx[i][s] = c++;
    }
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << mtx[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
