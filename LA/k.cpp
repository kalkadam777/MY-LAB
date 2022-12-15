#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int c=0;
    string str;
    cin >> str;
    int g[]={'a','e','o','u','i'};
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(str[i]==g[j]){
            c++;
        }
        }
        
    }
    cout << c;
    return 0;
}