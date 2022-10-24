# include <iostream>

using namespace std;

int main (){
    int a,b,rez=1;
    cin >> a >> b;
    for (int i=0+a; i<=b;i++){
        cout << i << " ";
        rez*=i;
    }
    cout << "\nSum = "<< rez;
    return 0;
}