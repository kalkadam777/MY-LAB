# include <iostream>

using namespace std;

int main (){
    int n,rez=0;
    cin >> n;
    for (int i=0; i<=n; i++){
        rez+=i;
    }
    cout << "Sum = " << rez;
    return 0;
}