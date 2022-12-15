// # include <iostream>

// using namespace std;

// int main (){
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = n-1; i >= 0; i--)
//     {
//         cout << arr[i] << ' ';
//     }
//     return 0;
// }
/*
8
29 19 51 69 96 15 910 92
yes
*/
#include <iostream>

using namespace std;

int main(){
string str;
getline(cin, str);
for(int i=str.length()-1; i>=0;i--){
    cout << str[i];
}
    return 0;
}