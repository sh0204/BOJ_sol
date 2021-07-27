#include<iostream>

using namespace std;

int paper[2200][2200];
int result[3];
//result[0]=-1�� ä���� ���� ����
//result[1]=0�� ä���� ���� ����
//result[2]=1�� ä���� ���� ����

bool same(int y, int x, int N) {
	int start = paper[y][x]; //������
	for (int i = y; i < y + N; i++)
		for (int j = x; j < x + N; j++)
			if (start!= paper[i][j])
				return false;
	return true;
}


int visit(int y, int x, int N) {
	if (same(y, x, N)) {
		result[paper[y][x]+1]++;
		//paper[][]�� -1�̸� result[0]�� -1�� ǥ�õ� ���̴ϱ� +1 ����
	}
	//���� �������� �ʴٸ�, 9���
	else {
		int size = N / 3;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				visit(y + size * i, x + size * j, size);
			}
		}
	}
	return 0;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			scanf("%d", &paper[y][x]);
		}
	}

	visit(0, 0, N);
	printf("%d\n%d\n%d", result[0], result[1], result[2]);
	
}
