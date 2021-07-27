#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int gcd(int a, int b) {
	// 최대 공약수 구현
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main() {
	
	int test,n;
	int arr[101];
	scanf("%d", &test); //test케이스 갯수

	for (int i = 0; i < test; i++) {
		scanf("%d", &n); //수의 갯수

		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[j]); //수를 배열에 넣어주기
		}
		long long sum = 0;

		for (int k = 0; k < n; k++) {
			for (int m = k+1; m < n; m++) {
				sum += gcd(arr[k], arr[m]); //배열 전체 반복하면서 gcd합을 구해준다.
			}
		}
		printf("%lld\n", sum);
	}
}