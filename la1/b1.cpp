#include <iostream>
#include <cmath>

using namespace std;
int Side(int x1,int y1, int x2,int y2){
   return (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
}

int main(){
   int x1,y1,x2,y2,x3,y3,a,b,c;
   cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3; 
   c= Side(x1,y1,x3,y3);
   b= Side(x1,y1,x2,y2);
   a= Side(x2,y2,x3,y3);
   if ((c== a+b) and (a==c-b) and (b==c-a) )
   {
    cout << "Yes";
   }
   else{
    cout << "No";
   }
    return 0;
}