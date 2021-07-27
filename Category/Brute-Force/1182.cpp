#include <iostream>

using namespace std;

int n, s;
int arr[20];
int cnt = 0;

// index : ������ ������ �ε���, sum: ��
void find(int index, int sum) {

	sum += arr[index];

	if (index >= n) return;

	if (sum == s) cnt++;

	//���ȣ�� ���� ����
	find(index + 1, sum - arr[index]); // �ش� ���ڸ� �� ����
	find(index + 1, sum); // �ش� ���ڸ� ����
}


int main(void) {

	scanf("%d %d", &n, &s);

	for (int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}

	find(0, 0);

	printf("%d\n", cnt);
}