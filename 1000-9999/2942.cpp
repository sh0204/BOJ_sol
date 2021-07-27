#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int gcd(int a, int b) {
	//�ִ� ����� ����
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main() {
	int r, g;
	scanf("%d %d", &r, &g);

	int num = gcd(r, g);
	 
	//�μ��� �ִ� ������� ������ ����� �����ش�.
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			//�ִ� ������� ������
			printf("%d %d %d\n", i, r / i, g / i);
		}
	}

}