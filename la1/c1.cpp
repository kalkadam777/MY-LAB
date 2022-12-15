#include <iostream>
#include <map>
#include <vector>
#include <iterator>

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
    map<int,int>mp;
    map<int,int>::iterator it;
    for (int i = 0; i < n; i++)
    {
       mp.insert(pair<int,int>(vec[i],0));
    }
    for (int i = 0; i < n; i++)
    {
        mp[vec[i]]++;
    }
    int c=0;
    for(it = mp.begin(); it != mp.end(); it++){
        if (it->second>=2)
        {
           c++;
        }
    }
    cout << c;
    return 0;
}