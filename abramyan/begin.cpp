# include <iostream>

using namespace std;

int main (){
    int n,sum=0,a;
    cin >> n;
    for (int i=0;i<n;i++){
        sum=0;
        cin >> a;
        while(a > 0){
            sum += a % 10;
            a = a / 10;
        }
        if(sum%2==0){
            cout << "Sum of digits is even!" << endl;
        }
        else if(sum%2!=0){
            cout << "Sum of digits is odd!" << endl;
        }
    }
    return 0;
}