#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,l,r;
    cin >> n >> l >> r;
    vector<int>vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    reverse(vec.begin()-1+l,vec.begin()+r);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ' ';
    }
    return 0;
}