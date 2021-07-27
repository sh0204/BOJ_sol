#include <iostream>

using namespace std;

int n, s;
int arr[20];
int cnt = 0;

// index : 선택한 숫자의 인덱스, sum: 합
void find(int index, int sum) {

	sum += arr[index];

	if (index >= n) return;

	if (sum == s) cnt++;

	//재귀호출 따로 따로
	find(index + 1, sum - arr[index]); // 해당 숫자를 안 더함
	find(index + 1, sum); // 해당 숫자를 더함
}


int main(void) {

	scanf("%d %d", &n, &s);

	for (int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}

	find(0, 0);

	printf("%d\n", cnt);
}