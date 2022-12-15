#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    string str,str1;
    cin >> str;
    str1=str;
    reverse(str1.begin(),str1.end());
    if (str1==str)
    {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}