#include <iostream>
#include <algorithm>
#include <string>
using namespace std; 

int gcd(int a, int b) {
	// �ִ� ����� ����
	if (b == 0) 
		return a;
	return gcd(b, a%b);
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	//�ּ� ����� = �� �ڿ��� ��/�ִ� �����

	printf("%d\n%d\n",gcd(a,b),(a*b)/ gcd(a, b));

}