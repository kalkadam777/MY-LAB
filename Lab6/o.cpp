#include <iostream>

using namespace std;
void sums(int n,int sum,int k){ 
    k=n%10;
 while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    if(sum%k==0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

int main(){
    int n,sum=0,k;
    cin >> n;
    sums(n,sum,k);
    return 0;
}