#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        vec.push_back(in);
    }
    cin >> k;
    sort(vec.begin(),vec.end());
    for (int i = 0; i < k; i++)
    {
        cout << vec[i] << ' ';
    }
}