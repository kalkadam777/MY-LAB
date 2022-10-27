#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));
	int n,S;
	cin >> n;
    int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()% 20+1;
		cout << arr[i] << ' ';
	}
    int min = arr[0],imin=0;
        for (int i = 0; i < n; i++)
        {
            if(min > arr[i]){
                min = arr[i];
                imin = i;
            }
            
        }
        cout << endl << imin << ' ' << min;
}