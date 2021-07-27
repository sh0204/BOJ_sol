#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//�ﰢ�� ���� n, �ﰢ�� �غ� 2n-1
char arr[3073][6244];

void star(int N, int x, int y) {
	if (N == 3) { //���̰� 3�� �ﰢ�� = �ּ� �ﰢ�� 

		//arr[����][�غ�]

		//ù°��
		arr[y][x] = '*'; 
		// ��°��
		arr[y + 1][x - 1] = '*'; 
		arr[y + 1][x + 1] = '*'; 
		//��°��
		for (int i = x - 2; i <= x + 2; i++) {
			arr[y + 2][i] ='*';
		}
		return;
	}
	star(N/ 2, x, y); //���� �ﰢ�� ����, ����� ��ǥ
	star(N / 2, x - (N / 2), y + (N / 2)); // ���� �Ʒ� ����, ����� ��ǥ
	star(N / 2, x + (N / 2), y + (N / 2)); // ������ �Ʒ� ����, ����� ��ǥ
}
int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) { //����
		for (int j = 0; j < 2 * N - 1; j++) { //�غ�
			arr[i][j] = ' '; //�迭 �ʱ�ȭ
		}
	}
	star(N, N-1, 0);//�ﰢ�� ����, �ﰢ�� ���� ������ ��ǥ
	
	for (int i = 0; i < N; i++) { //����
		for (int j = 0; j < 2 * N - 1; j++) { //�غ�
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

}