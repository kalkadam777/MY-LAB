#include <iostream>

using namespace std;

int main(){
    int n,c=0;
    cin >> n;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(str[i]>='A' and str[i] <= 'Z'){
            c++;
        }
    }
    if (c>0)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}