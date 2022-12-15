#include "func.h"
int main(){
    int n,k;
    cin >> n;
    vector<int> vec = creatVec(n);
    coutVec(vec);
    cout<<endl;

    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i]%2==1){
            vec.erase(vec.begin()+i);
            i--;
        }
    }
    coutVec(vec);
    cout << endl << vec.size();
}