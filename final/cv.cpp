#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    int s,s1;
    s = abs(a.first*a.first + a.second*a.second);
    s1 = abs(b.first*b.first + b.second*b.second);
    return s<s1;
}

int main(){
    int n;
    cin >> n;
    vector< pair<int,int> >vec;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        vec.push_back(make_pair(x,y));
    }
    sort(vec.begin(),vec.end(),cmp);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << ' ' << vec[i].second << endl;
    }
    
    return 0;
}