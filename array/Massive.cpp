#include <iostream>
using namespace std;
int main (){
    int a,b,sum,cnt;
    cin >> a >> b;
    int arr[a][b];
    int arr1[a];
    sum = 0;
    cnt = 0;
    for(int i = 0; i< a; i++){
    for(int j=0; j< b; j++){
    cin >> arr[i][j];
    if(i == cnt)
    {
    sum+= arr[i][j];
    }
    arr1[i] = sum;
    }
    sum=0;
    cnt++;
    }
    int min =arr1[0];
    int pos =0;
    for(int i=0;i<a;i++){
    if(arr1[i]<min){
        min =arr1[i];
        pos=i;
    }
    }
    cout << pos+1 <<endl;
return 0;
}