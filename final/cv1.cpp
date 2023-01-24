#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    multimap<int,pair<int,int> > mp;
    multimap<int,pair<int,int> > ::iterator it;
    for (int i = 0; i < n; i++)
    {
        int s,x,y;
        cin >> x >> y;
        s = abs(x*x+y*y);
        mp.insert(pair<int ,pair<int, int> >(s,pair<int,int>(x,y)));
    }
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->second.first << ' ' << it->second.second << endl;
    }
    return 0;
}