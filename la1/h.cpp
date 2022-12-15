#include <iostream>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string>vec;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        vec.push_back(in);
    }
    map<string,int>mp;
    map<string,int>::iterator it;
    // for (int i = 0; i < n; i++)
    // {
    //     mp.insert(pair<string,int>(vec[i],i+1));
    // }
    for (int i = 0; i < n; i++)
    {
        mp[vec[i]]= i+1;
    }
    for(it = mp.begin(); it!= mp.end();it++){
        cout << it->first << ' ' << it->second;
    }
    return 0;
}