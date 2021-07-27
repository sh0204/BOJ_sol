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
	

	//N*N 의 배열 만들어주고 배열에 공백으로 채움
	// 3의 제곱값을 입력 받고 3으로 나눠서 1이 될때까지 나눠준다.
	// 1이 될때까지 나눈 값들은 *을 입력

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