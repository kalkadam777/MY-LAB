#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,bool> mp;
    for (int i = 1; i <=n; i++)
    {
        string s;
        cin >> s;
        if(!mp[s]){
            cout << "new user added\n";
            mp[s] = true;
        }
        else{
            cout << "user already exists\n";
        }
    }
    




    return 0;
}