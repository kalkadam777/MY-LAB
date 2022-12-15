#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        vec.push_back(in);
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ' ';
    }
    return 0;
}