#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    string str;
    getline(cin,str);
    sort(str.begin(),str.end());
    cout << str[str.size()-1];
    return 0;
}