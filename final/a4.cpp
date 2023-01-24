#include <iostream>
#include <vector>

using namespace std;
bool cmp(int a,int b){
    return a>b;
}

int main(){
    int n,m;
    cin >> n;
    vector<int>vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    cin >> m;
    sort(vec.begin(),vec.end(),cmp);
    for (int i = 0; i < vec.size(); i++)
    {
       if (vec[i]<m)
       {
        cout << i+1;
        return 0;
       }
    }
    cout << vec.size()+1;
    return 0;
}