#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int>mp;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
        if(mp[s]==1){
            cout << "new user added" << endl;
        }
        else{
            cout << "user already exists" << endl;
        }
    }
    return 0;
}