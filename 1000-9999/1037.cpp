#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int n;
	int num[51];
	scanf("%d", &n); //����� ����

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]); //����� �迭 ����
	}
	sort(num, num + n); //������������ ����
	printf("%d", num[0] * num[n - 1]); //���� ū ���� ���� ���� �� ��
}