#include <iostream>
#include <algorithm>
#include <string>
using namespace std; 

int gcd(int a, int b) {
	// 최대 공약수 구현
	if (b == 0) 
		return a;
	return gcd(b, a%b);
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	//최소 공배수 = 두 자연수 곱/최대 공약수

	printf("%d\n%d\n",gcd(a,b),(a*b)/ gcd(a, b));

}