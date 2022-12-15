#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
string s;
cin >> s;
char min = 'a';
for(int i = 0; i < s.size(); i++){
    if(min < s[i]){
        min = s[i];
    }
}
cout << min;

}