#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    int n; 
    cin >> n;
    multiset<pair<int, int>> mp; 
    multiset<pair<int, int>> ::iterator it;
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        mp.insert(make_pair(x, y));
    }
    for(it = mp.begin(); it != mp.end(); it++){
    cout << it->first << " " << it->second << endl;
    }
}