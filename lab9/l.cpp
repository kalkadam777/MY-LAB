#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    multimap<int,int>mp;
    multimap<int,int> ::iterator it;
    for (int i = 1; i <=n; i++)
    {
        int x,y;
        cin >> x >> y;
        mp.insert(make_pair(x+y,i));
    }
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->second << ' ';
    }



    return 0;
}