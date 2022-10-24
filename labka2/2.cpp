# include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    if (n%2==1){
        cout << "Super";
    }
   
    if((n%2==0) and (n>=2) and (n<=20)){
        cout << "Not Super";
    }
    
    if ((n%2==0) and (n>=6) and (n<=20)){
        cout << "Super";
    }
  
   else if ((n%2 ==0) and (n>20)){
        cout << "Not Super";
    }
    return 0;
}