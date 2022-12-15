#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int sum=0;
    string str;
    getline(cin,str);
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]=='1'){
            sum+=pow(2,str.size()-1-i);
        }
    }
    cout << sum;
    return 0;
}