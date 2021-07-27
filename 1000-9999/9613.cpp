#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int gcd(int a, int b) {
	// �ִ� ����� ����
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main() {
	
	int test,n;
	int arr[101];
	scanf("%d", &test); //test���̽� ����

	for (int i = 0; i < test; i++) {
		scanf("%d", &n); //���� ����

		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[j]); //���� �迭�� �־��ֱ�
		}
		long long sum = 0;

		for (int k = 0; k < n; k++) {
			for (int m = k+1; m < n; m++) {
				sum += gcd(arr[k], arr[m]); //�迭 ��ü �ݺ��ϸ鼭 gcd���� �����ش�.
			}
		}
		printf("%lld\n", sum);
	}
}