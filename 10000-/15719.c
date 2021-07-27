#include <stdio.h>
#define MAX 10000000
int main() {

	int num;
	int x;
	long long sum = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {

		scanf("%d", &x);
		sum += x;
	}
	int k = sum - (long long)num * (num - 1) / 2LL;
	printf("%d\n", k);
}