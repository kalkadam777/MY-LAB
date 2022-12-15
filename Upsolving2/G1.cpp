#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m, k,a,b;
    cin >> n >> m >> k;
    a = round(sqrt(n));
    b = sqrt(m);
    if (a < sqrt(n))
    {
        a++;
    }
    if (k == 1) {
        for (int i = a; i <= b; i++)
        {
            cout << pow(i, 2) << ' ';
        }
    }
    else if (k == -1) {
        for (int i = b; i >= a; i--)
        {
            cout << pow(i, 2) << ' ';
        }
    }
    return 0;
}