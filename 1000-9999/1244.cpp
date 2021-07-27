#include <stdio.h>

int main() {
	int n;
	int sw[100];
	scanf("%d", &n); //스위치 수

	for (int i = 1; i <= n; i++) {
		scanf("%d", &sw[i]); //스위치상태
	}

	int m;
	scanf("%d", &m); //학생수

	int gender, num, a, b;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &gender, &num);//성별, 학생이 받은 수

		if (gender == 1) { //남학생일 경우
			for (int i = num; i <= n; i += num) {
				sw[i] ^= 1;
			}
		}
		if (gender == 2) { //여학생일 경우
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
		if (i % 20 == 0)  //한 줄에 20개씩 잘라서 출력
			printf("%d\n", sw[i]);
		else 
			printf("%d ", sw[i]);
	}
	return 0;
}