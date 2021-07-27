#include <iostream>
#include <algorithm>
#include <string>

int main() {

	int num;
	scanf("%d", &num);

	int arr[1001];
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}

	// 오름차순 정렬
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - i - 1; j++) {
			int tmp;
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < num; i++) {
		printf("%d\n", arr[i]);
	}
}