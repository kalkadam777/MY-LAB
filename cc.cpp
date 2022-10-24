#include <iostream>

using namespace std;

int main(){
    int a,b,c,max,min,med;
    cin >> a >> b >> c;
    if(a>b && a>c){
        max = a;
    }
    if(b>a && b>c){
        max = b;
    }
    if(c>a && c>b){
        max = c;
    }
    if(a<b && a<c){
        min = a;
    }
    if(b<a && b<c){
        min = b;
    }
    if(c<a && c<b){
        min = c;
    }
    if(a!=max && a!=min){
        med = a;
    }
    if(b!=max && b!=min){
        med = b;
    }
    if(c!=max && c!=min){
        med = c;
    }
    cout << max << ' ' << med << ' ' << min;
}