#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; 
    cin >> n;
    map<string, string> m1;

    for(int i = 0; i < n; i++){
        string login, password; 
        cin >> login >> password;
        m1[login] = password;
    }
    int m; 
    cin >> m;
    for(int i = 0; i < m; i++){
        string login, password; 
        cin >> login >> password;
        if(m1[login].empty()) cout << "login error" << endl;
        else if(m1[login] != password) cout << "password error" << endl;
        else cout << "correct password" << endl;
    }
}
