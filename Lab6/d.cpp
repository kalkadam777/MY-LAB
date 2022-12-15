#include <iostream>

using namespace std;

void Ali(int* a,int k,int n,int c){

    for (int i = 0; i < n; i++)
    {
       if(a[i]==k){
        c++;
       }
    }
    if(c>0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
int main(){
    int n,k,c=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    Ali(a,k,n,c);
    return 0;
}