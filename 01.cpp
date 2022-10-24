#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, rez=0;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] =i*i;
		cout << arr[i] << " ";
	}
	
	return 0;
}
/*
10
7 77 7 7 7 7 7777 7 7 77

*/