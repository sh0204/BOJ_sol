#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	long long n;
	long long q;

	scanf("%lld", &n); //���� n �־���

	q = sqrt(n); //������ �����ֱ�

	if ((q * q) == n) { //q^2 ==n�̸� q���
		printf("%lld", q);
	}
	else { //�ƴϸ� 1�����ְ� ���
		printf("%lld", q+1);
	}
	
	return 0;
}