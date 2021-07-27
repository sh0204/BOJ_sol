#include <iostream>
#include <algorithm>
using namespace std;

//������ 1�̰� ���� n�� �������� �հ���
//m(m+1)/2 <= n ==> m(m+1) <=2n
int T;
long long N;

long long cnt(long long m) {
	return m * (m + 1);
}
int main() {
	scanf("%d", &T); //�׽�Ʈ ����
	for (int i = T; i > 0; i--) {
		scanf("%lld", &N);

		long long left = 0; //���۰�
		long long right = N; //�� ��
		long long mid;//�߰���
		long long ans = 0;

		while (left <= right) {
			mid = (left + right) / 2;
			if (cnt(mid)> N*2) { //�߰����� ������ �� ���� ������ ã��
				right = mid - 1; 
			}
			else { //�߰� ���� ũ�� �� ū ������ ã��		
				left = mid + 1;
				ans = mid;
			}
		}
		printf("%lld\n", ans);
	}
}