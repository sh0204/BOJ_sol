#include <iostream>
#include <algorithm>
#include <string>

int bingo[502][502];
int row[502];
int col[502];
int sum = 0;
int max;

int find(int num) {

	int count = 0;
	while (num) {
		if (num % 10 == 9) { //9�� ���� ����
			count++;
		}
		num /= 10;
	}
	return count;
}

int main() {

	int n, m;

	scanf("%d %d", &n, &m);

	//������ ���� �Է�
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &bingo[i][j]);
			row[i] += find(bingo[i][j]); //�࿡�� 9�� ����
			col[j] += find(bingo[i][j]); //������ 9�� ����
			sum += find(bingo[i][j]); // ��ü 9�� ����
		}
	}

	//��
	for (int i = 0; i < n; i++) {
		if (row[i] > max) {
			max = row[i];
		}
	}
	//��
	for (int j = 0; j < n; j++) {
		if (col[j] > max) {
			max = col[j];
		}
	}

	//��ü 9�� �������� �ִ�� 9�� ���� ��Ǵ� ���� ������ ����
	printf("%d", sum - max);

}