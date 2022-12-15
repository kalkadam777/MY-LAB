#include <iostream>

using namespace std;

int main(){
    int rez=0,rez1=0;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if(i%2==0){
            rez+=str[i];
        }
        else if(i%2!=0){
            rez1+=str[i];
        }
    }
    if (rez==rez1)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}