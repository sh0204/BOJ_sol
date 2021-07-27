#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int N;
int arr[10];
bool check[10];

void visited(int num) {
	if (num >= N) { //�Է� ���� �� ���� ������ Ž��������
		for (int i = 0; i < N; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}
	else {
		for (int i = 1; i <= N; i++) {
			if (check[i] == true)
				continue;
			check[i] = true;
			arr[num] = i;
			visited(num + 1); 
			check[i] = false; // ����� ���ָ� ���� �ٽ� ��밡���ϰ� �ʱ�ȭ
		}
	}
}

int main() {
	scanf("%d", &N);
	visited(0);
	return 0;
}