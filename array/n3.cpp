#include <iostream>

using namespace std;

int main(){
    int n,d=1;
    cin >> n;
    int mtx[n][n];
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            if(i==n-1-j){
                cout << d+i;
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
    }





    return 0;
}
