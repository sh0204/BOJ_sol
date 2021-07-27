#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int a[1000000];
int b[1000000];
int sum[2000000];

int main() {

	scanf("%d %d", &n, &m);

	//�迭 �� �Է�
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}

	int i = 0, j = 0,k = 0; //i=a�� �ε��� j=b�� �ε��� k�� ��ġ�� �迭�� �ε���
	while (i < n && j < m) {
		if (a[i] < b[j]) {
			sum[k++] = a[i++];
		}
		else
			sum[k++] = b[j++];
	}
	while (i < n) {
		sum[k++] = a[i++];
	}
	while (j < m) {
		sum[k++] = b[j++];
	}

	for (int i = 0; i < n + m; i++) {
		printf("%d ", sum[i]);

	}
}