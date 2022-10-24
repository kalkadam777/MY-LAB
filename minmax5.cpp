#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));
	int n;
	cin >> n;
    float* m = new float[n];
    float* v = new float[n];
	for (int i = 0; i < n; i++)
	{
		m[i] = rand() % 20+1;
        v[i] = rand() % 20+1;
		cout << m[i] << ' ' << v[i] << endl;
	}
    float max=m[0] / v[0],imax=0;
        for (int i = 0; i < n; i++)
        {
            if(max<m[i] / v[i]){
                max=m[i] / v[i];
                imax=i;
            }
        }
        cout << endl << max << ' ' <<  imax ;
}