#include <iostream>
#include <algorithm>
using namespace std;
int k, n; // k = �����̰� ����, n = �ʿ��� ���� ����
long long length[10001];

long long find(long long left, long long right) {
	//������ ���̸� �ּҰ� 1�̰�, �ִ� Max�� �����ؼ� Ž������

	while (left <= right) {
		int sum = 0;
		long long mid = (left + right) / 2; // �߰���
		for (int i = 0; i < k; i++) {
			sum += length[i] / mid; //sum�� �������� mid�� ���� ����� ��
									//�̰� n�� ���������
		}
		if (sum >= n) {
			//ã�� ������ ���ϴ� n���� ũ�� �� ū ���� ���������
			left = mid + 1;
		}
		else {
			//ã�� ������ n���� ������, �� ���� ���� ���������
			right = mid - 1;
		}
	}
	return right;
}
int main() {
	long long Max = 0;

	scanf("%d %d", &k, &n);
	for (int i = 0; i < k; i++) {
		scanf("%lld", &length[i]);
		
		// ������ �ִ� ������ �� ���� �� ���� Max�� ����
		Max = max(length[i], Max);
	}
	printf("%lld\n", find(1, Max));
	return 0;
}