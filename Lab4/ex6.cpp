 #include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cin >> arr[i][j];
        }
        
    }
    int max=arr[0][0],imax,jmax;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if(max<arr[i][j]){
            max=arr[i][j];
            imax=i+1;
            jmax=j+1;
           }
         
        }
    }
    cout << imax << ' ' << jmax;
    return 0;
}
