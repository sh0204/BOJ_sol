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

	int n, m;
	scanf("%d:%d", &n, &m);
	//n�� m�� �μ��� �ִ� ������� ���� ���� ���
	int num = gcd(n, m);
	printf("%d:%d", n / num, m / num);

}