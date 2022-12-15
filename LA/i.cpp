#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str,l;
    cin >> str;
    cin >> l;
    sort(str.begin(),str.end());
    sort(l.begin(),l.end());
    if(str==l){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}