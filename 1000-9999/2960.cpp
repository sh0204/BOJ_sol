#include <iostream>
#include <algorithm>
#include <string>

int main() {

	int arr[1001];
	int count = 0;
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i <= n; i++) { //�迭 �ʱ�ȭ
		arr[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) { //�迭�� ��Ұ� 0�̸�
			continue;
		}
		else {
			for (int j = i; j <= n; j+=i) {//�Ҽ��� �����
				if (arr[j] != 0) { //���� �����������ϱ� 0���� ������
					arr[j] = 0;
					count++; //���ﶧ���� ī��Ʈ ����
				}
				if (count == k) {//��ǥ Ƚ���̹Ƿ�
					printf("%d", j); 
					break; //����
				}
			}
		}
	}
}