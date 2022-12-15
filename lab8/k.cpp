#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k,sum=0;
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
    for (int i = vec.size()-1; i >= vec.size()-k; i--)
    {
        sum+=vec[i];
    }
    cout << sum;
}