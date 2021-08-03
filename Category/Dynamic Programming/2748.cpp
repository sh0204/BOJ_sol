#include <iostream>
#include <algorithm>

using namespace std;
int n;
long long arr[100];

long long fibo(int k) {
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i <= k; i++) {
		arr[i] = arr[i - 1] + arr[i-2];
	}
	return arr[k];
	
}
int main() {
	
	scanf("%d", &n);
	printf("%lld\n", fibo(n));
}