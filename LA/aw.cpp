#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    int count[10]={0};
    for (int i = 0; i < str.size(); i++)
    {
        count[str[i]-'0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        if(count[i]!=0 ){
            cout << i << ": " << count[i] << endl;
        }
    }
    return 0;
}