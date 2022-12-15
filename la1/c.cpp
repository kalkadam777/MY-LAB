#include "func.h"
int main(){
    int n,l,k;
    cin >> n >> k >> l;
    vector<int> vec = creatVec(n);
    coutVec(vec);
    cout<<endl;

    for(int i=k;i<= l; i++)
    {
        vec.erase(vec.begin()+k);
    }
    coutVec(vec);
}