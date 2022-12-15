#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
bool cmp(pair<string,double>a,pair<string,double>b){
    if(b.second == a.second){
    return a.first > b.first;
    }
    return a.second > b.second;
}

int main(){
    int n,rez=0;
    cin >> n;
    map<string,double>mp;
    map<string,double>::iterator it;
    vector<pair<string,double> > vec;
    for (int i = 0; i < n; i++)
    {
        string str;
        int x;
        cin >> str >> x;
        mp[str] += x; 
        rez+=x;
    }
    for(it = mp.begin(); it != mp.end(); it++)
    {
        vec.push_back(make_pair(it->first,it->second));   
    }
    sort(vec.begin(),vec.end(),cmp);
    cout << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << ' ' << vec[i].second/rez*100 << "%" <<  endl;
    }
    
    return 0;
}