#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b){
    return a.second>b.second;
}

int main(){
    int n;
    cin >> n;
    vector<pair<string,int> >vec(n);
    for (int i = 0; i < n; i++)
    {
        string s,s1;
        int x,y,z;
        cin >> s >> s1 >> x >> y >> z;
        vec[i].first = s + ' ' + s1;
        vec[i].second = x+y+z;
    }
    stable_sort(vec.begin(),vec.end(),cmp);
    for (int i = 0; i < n; i++)
    {
        cout << vec[i].first << endl;
    }
    return 0;
}