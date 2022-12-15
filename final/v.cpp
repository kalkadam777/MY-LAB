#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, set<int> >mp;
    map<string, set<int> >::iterator it;
    for (int i = 0; i < n; i++)
    {
        string name;
        int day;
        cin >> name >> day;
        mp[name].insert(day);
    }
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << ' ';
        if (it->second.size() >= 3 )
        {
            cout << "+1";
        }
        else{
            cout << "NO BONUS";
        }
        cout << endl;
    }

}