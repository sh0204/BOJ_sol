#include <iostream>
using namespace std;

int main() {

	
	int student[1001][6];
	int count[1001]; //ī��Ʈ ���� �迭

	int n;
	scanf("%d", &n); //�л� �� �Է�


	//�迭 �ʱ�ȭ ����
	for (int i = 0; i < n; i++) {
		count[i] = 0;
	}

	// �л��� �� �Է�
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 5; j++) {
			scanf("%d", &student[i][j]);
		}
	}

	// �л��鳢�� ��
	for (int i = 1; i <= n; i++) { 
		for (int j = 1; j <= n; j++) { 
			for (int k = 1; k <= 5; k++) { //�г�
				if (student[i][k] == student[j][k]) {
					count[i]++; //���� �� �̿�����
					break;
				}
			}
		}
	}

	int max = 0;
	int result = 0;
	for (int i = 1; i <= n; i++) {
		if (count[i] > max) {
			max = count[i];
			result = i;
		}
		// �ӽù��� ������ �������̸�
		/*else if (count[i] == max) {
			if (result > i) {
				result = i;
			}
		}*/
	}

	printf("%d", result);
}