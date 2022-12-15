#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,a,b;
    cin >> n;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        vec.push_back(in);
    }
    cin >> a >> b;
    
    for (int i = a; i <= b; i++)
    { 
        vec.erase(vec.begin()+a);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ' ';
    }
    return 0;
}