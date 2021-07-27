#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int n;
	int num[51];
	scanf("%d", &n); //약수의 갯수

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]); //약수들 배열 저장
	}
	sort(num, num + n); //오름차순으로 정렬
	printf("%d", num[0] * num[n - 1]); //가장 큰 수와 가장 작은 수 곱
}