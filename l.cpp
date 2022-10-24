# include <iostream>

using namespace std;

int main (){
    //let's find min
    int n, a,max=-10000;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> a;
        if(a > max)
            max = a;
    }
    cout << max;
}