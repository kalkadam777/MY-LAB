#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int a=2 ; a < n ; a++)
    {
        bool prime = true;

        for(int c=2 ; c*c <= a ; c++)
        {
            if(a % c == 0)
            {
                prime = false;
                break;
            }
        }

        if(prime) cout << a << " "<<"is prime"<<endl;
    }

    return 0;
}