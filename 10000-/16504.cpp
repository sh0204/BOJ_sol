#include <iostream>

using namespace std;

int main() {
	
	int n; //������ ����
	int k; //������ ���� ��
	long long sum = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		for (int j= 0; j < n; j++) {
			
			scanf("%d", &k);
			sum += k; //������ ������ ��� ������
		}
	}
	printf("%lld\n", sum);
}