#include<iostream>
#include<queue>

using namespace std;

int main(){
	queue < int > q;
	q.push(5);
	// 5
	q.push(7);
	// 5 7
	q.push(13); // �������� � ��������
	// 5 7 13
	q.pop(); // ������� ��������
	// 5 7
	q.size(); // ����� �������
	q.front(); // ����� �������
	return 0;
}
