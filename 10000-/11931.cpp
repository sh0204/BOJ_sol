#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001];

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}

	//내림차순 정렬
	//reverse(arr, arr + num);
	sort(arr, arr + num, compare);

	for (int i = 0; i < num; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}