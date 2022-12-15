#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,a,k;
    cin >> n;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        vec.push_back(in);
    }
    cin >> k >> a;
    vec.insert(vec.begin()+k,a);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ' ';
    }
    
}