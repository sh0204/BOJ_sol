#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;
int N, r, c;
int cnt;

void visit(int y, int x, int n) {
	//y,x�� ���� ��ǥ, n �Ѻ��� ����
	//��, ��

	if (y == r && x == c) {
		printf("%d\n", cnt);
		return; //����
	}
	
	//r�� c�� ���� ��и�
	if (r < y + n && r >= y && c < x + n && c >= x) {
		//���� Ž��
		visit(y, x, n / 2);
		//���� Ž��
		visit(y, x + n / 2, n / 2);
		//�޾� Ž��
		visit(y + n / 2, x, n / 2);
		//���� Ž��
		visit(y + n / 2, x + n / 2, n / 2);
	}

	//���� ��и鿡 ������ ��и��� ũ�⸸ŭ �����ش�.
	else {
		cnt += n * n;
	}
}
int main() {

	scanf("%d %d %d", &N, &r, &c);

	visit(0, 0, pow(2, N));
	//�Ѻ��� ���̴� 2^N 
	
	return 0;
}