#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int a[1000000];
int b[1000000];
int sum[2000000];

int main() {

	scanf("%d %d", &n, &m);

	//배열 값 입력
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}

	int i = 0, j = 0,k = 0; //i=a의 인덱스 j=b의 인덱스 k는 합치는 배열의 인덱스
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