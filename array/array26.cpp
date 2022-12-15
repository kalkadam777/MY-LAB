#include <iostream>

using namespace std;

int main(){
    int n,c=1;
    cin >> n;
    int mtx[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            mtx[i][j] = c++;
            cout << mtx[i][j] << "\t";
        }
        cout << endl;
    }
    for(int s=0; s<n;s++){
    
    for(int j = 0; j<n-s; j++){
        cout << mtx[s][j] << ' ';
    }
    cout << "| ";
    for(int i = 1+s; i<n; i++){
        cout << mtx[i][n-1-s] << ' ';
    }
    cout << endl;
    }
    return 0;
}
