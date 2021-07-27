#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int gcd(int a, int b) {
	//최대 공약수 구현
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main() {
	int r, g;
	scanf("%d %d", &r, &g);

	int num = gcd(r, g);
	 
	//두수의 최대 공약수의 약수들로 사과를 나눠준다.
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			//최대 공약수의 약수라면
			printf("%d %d %d\n", i, r / i, g / i);
		}
	}

}