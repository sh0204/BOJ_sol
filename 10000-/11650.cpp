#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//��� �̿�
pair <int, int> point[100001];

#define x first
#define y second

int N;

int main() {
	scanf("%d", &N); //n���� ��
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &point[i].x, &point[i].y);
	}
	sort(point, point + N); //�������� ����
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", point[i].x, point[i].y);
	}
}