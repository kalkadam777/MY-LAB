#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,c;
    cin >> n;;
    vector<int>vec;
    vector<int>vec1;
    vector<int>vec2;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        vec.push_back(in);
    }
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        int in;
        cin >> in;
        vec1.push_back(in);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        vec2.push_back(vec[i]);
    }
    for (int i = 0; i < vec1.size(); i++)
    {
        vec2.push_back(vec1[i]);
    }
    sort(vec2.begin(),vec2.end());
    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << ' ';
    }
    return 0;
}