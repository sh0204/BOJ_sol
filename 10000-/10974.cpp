#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int N;
int arr[10];
bool check[10];

void visited(int num) {
	if (num >= N) { //입력 받은 수 까지 순열을 탐색했으면
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
			check[i] = false; // 출력을 해주면 숫자 다시 사용가능하게 초기화
		}
	}
}

int main() {
	scanf("%d", &N);
	visited(0);
	return 0;
}