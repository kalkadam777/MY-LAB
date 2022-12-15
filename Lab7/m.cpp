#include <iostream>
#include <algorithm>

using namespace std;
void INT(int a){
    if(a<=0){
        return;
    }
    INT(a-1);
    cout << a << ' ';
}
int main(){
    int n;
    cin >> n;
     INT(n);
    return 0;
}