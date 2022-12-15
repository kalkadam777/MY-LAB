#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,c=0;
    string str;
    char ch;
    cin >> str >> ch >> n;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]==ch){
        c++;
        }
    }
    if(n==c){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}