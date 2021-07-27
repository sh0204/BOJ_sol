#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void star(int i, int j, int n) {
	if (i % 3 == 1 && j % 3 == 1) {
		printf(" ");
		return;
	}
	else if (n == 1) {
		printf("*");
		return;
	}
	else star(i / 3, j / 3, n / 3);
	

	//N*N �� �迭 ������ְ� �迭�� �������� ä��
	// 3�� �������� �Է� �ް� 3���� ������ 1�� �ɶ����� �����ش�.
	// 1�� �ɶ����� ���� ������ *�� �Է�

}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			star(i, j, n);
		}
		printf("\n");
	}
	return 0;
}