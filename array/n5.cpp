#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int mtx[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cin >> mtx[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            if((i+j)%2==0 ){
                mtx[i][j]=mtx[i][j]+1;
            }
            else{
                mtx[i][j]=mtx[i][j]-1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cout << mtx[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}