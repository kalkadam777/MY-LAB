#include <iostream>

using namespace std;

int main(){
    int max = 0,min = 101;
    string s;
    char t;
    cin >> s >> t;
    string p = "";
    int c=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==t){
            c++;
            p+=i;
        }
    }
    for (int i = 0; i < p.length(); i++)
    {
        if(p[i]>max){
            max = p[i];
        }
       
    }
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i]<min){
            min = p[i];
        }
    }
    if(c==1){
        cout << max;
    }
    else{
        cout << min << ' ' << max;
    }
    return 0;
}
