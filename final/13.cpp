#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>vec(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> vec[i];
    // }
    for (int i = 1; i <=n; i++)
    {
        vec[i-1] = i;
    }
    cout << endl;
    while (next_permutation(vec.begin(), vec.end()))
    {
        for (int i = 0; i <n; i++)
        {
            cout << vec[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}