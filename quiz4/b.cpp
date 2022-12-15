#include <iostream>
#include <set>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>vec;
    set<pair<int,int> >vec1;
    set<pair<int,int> >::iterator it;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        vec.push_back(in);
    }
    for (int i = 0; i < vec.size()-1; i++)
    {
        vec1.insert(pair<int,int>(min(vec[i],vec[i+1]),max(vec[i],vec[i+1])));
    }
    
    for(it = vec1.begin(); it != vec1.end(); it++){
        cout << it->first << ' ' << it->second << endl;
    }
    cout << vec1.size();
    return 0;
}