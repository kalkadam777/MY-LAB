#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second == b.second ){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    int n;
    cin >> n;
    vector< pair<int,int> >vec;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        pair<int,int>pr;
        cin >> pr.first >> pr.second;
        vec.push_back(pr);
    }
    sort(vec.begin(),vec.end(),cmp);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << ' ' << vec[i].second << endl;
    }
    
    return 0;
}
