# include <iostream>

using namespace std;

int main (){
    //let's find min
    int n, a,max=0;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> a;
        if(a > max)
            max = a;
    }
    //1st: i==0, a=1
    //if(1 < 10000)
    //min = 1
    //i++ == 1
    //2nd: i == 1, a = 2
    //if(2 < 1)
    // min == 1
    //i++ == 2
    //3rd: i == 2, a = 3
    //if(3 < 1)
    //min = 1
    //i++ -> i == 3
    //4th: i == 3, a = -1
    //if(-1 < 1)
    //min = -1
    //i++ -> i == 4. 

    cout << max;

    return 0;
}
