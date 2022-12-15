#include <iostream>
#include <vector>

using namespace std;

int main(){
    srand(time(0));
    int n,k;
    cin >> n >> k;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        vec.push_back(rand()%10+1);
    }
    for (int i = 0; i < vec.size(); i++)
    {
       cout << vec[i] << ' ';
    }
    cout << endl;
       vec.erase(vec.begin()+k);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ' ';
    }
    return 0;
}