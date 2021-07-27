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

	int n, m;
	scanf("%d:%d", &n, &m);
	//n과 m을 두수의 최대 공약수로 나눈 수를 출력
	int num = gcd(n, m);
	printf("%d:%d", n / num, m / num);

}