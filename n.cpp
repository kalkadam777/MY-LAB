#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));
	int n,S;
	cin >> n;
    int* a = new int[n];
    int* b = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 20+1;
        b[i] = rand() % 20+1;
		cout << a[i] << ' ' << b[i] << endl;
	}
    int min=a[0]*b[0];
        for (int i = 0; i < n; i++)
        {
            if(min>a[i]*b[i]){
                min=a[i]*b[i];
            }
        }
        cout << endl << min << ' ';
}