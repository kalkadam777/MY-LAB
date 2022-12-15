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
    int k;
    cin >> k;
        vec.erase(vec.begin()+k);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ' ';
    }
    
    return 0;
}