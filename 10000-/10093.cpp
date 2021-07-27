#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	long long a, b,temp;
	scanf("%lld %lld", &a, &b);

	if (b<a) {
		temp = a;
		a = b;
		b = temp;
	}
	else if (a == b) {
		printf("0\n");
	}
	printf("%lld\n", b - a - 1);
	for (long long i = a + 1; i < b; i++) {
		printf("%lld ", i);
	}
}