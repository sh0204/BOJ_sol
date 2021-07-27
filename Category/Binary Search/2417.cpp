#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	long long n;
	long long q;

	scanf("%lld", &n); //정수 n 주어짐

	q = sqrt(n); //제곱근 구해주기

	if ((q * q) == n) { //q^2 ==n이면 q출력
		printf("%lld", q);
	}
	else { //아니면 1더해주고 출력
		printf("%lld", q+1);
	}
	
	return 0;
}