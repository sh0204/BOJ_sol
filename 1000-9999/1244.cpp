#include <stdio.h>

int main() {
	int n;
	int sw[100];
	scanf("%d", &n); //����ġ ��

	for (int i = 1; i <= n; i++) {
		scanf("%d", &sw[i]); //����ġ����
	}

	int m;
	scanf("%d", &m); //�л���

	int gender, num, a, b;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &gender, &num);//����, �л��� ���� ��

		if (gender == 1) { //���л��� ���
			for (int i = num; i <= n; i += num) {
				sw[i] ^= 1;
			}
		}
		if (gender == 2) { //���л��� ���
			a = b = num;
			while (1) {
				a--;
				b++;
				if (a < 1 || n < b) 
				break; 
				if (sw[a] != sw[b]) 
				break;
			}
			a++;
			b--;
			for (int i = a; i <= b; i++) {
				sw[i] ^= 1;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (i % 20 == 0)  //�� �ٿ� 20���� �߶� ���
			printf("%d\n", sw[i]);
		else 
			printf("%d ", sw[i]);
	}
	return 0;
}