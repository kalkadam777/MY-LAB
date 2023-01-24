#include<iostream>
#include<queue>

using namespace std;

int main(){
	queue < int > q;
	q.push(5);
	// 5
	q.push(7);
	// 5 7
	q.push(13); // закинуть в верхушку
	// 5 7 13
	q.pop(); // удалить верхушку
	// 5 7
	q.size(); // Длина очереди
	q.front(); // Перед очереди
	return 0;
}
