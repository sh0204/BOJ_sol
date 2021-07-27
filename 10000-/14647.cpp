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
		if (num % 10 == 9) { //9의 갯수 세기
			count++;
		}
		num /= 10;
	}
	return count;
}

int main() {

	int n, m;

	scanf("%d %d", &n, &m);

	//빙고판 숫자 입력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &bingo[i][j]);
			row[i] += find(bingo[i][j]); //행에서 9의 갯수
			col[j] += find(bingo[i][j]); //열에서 9의 갯수
			sum += find(bingo[i][j]); // 전체 9의 갯수
		}
	}

	//행
	for (int i = 0; i < n; i++) {
		if (row[i] > max) {
			max = row[i];
		}
	}
	//열
	for (int j = 0; j < n; j++) {
		if (col[j] > max) {
			max = col[j];
		}
	}

	//전체 9의 갯수에서 최대로 9가 많은 행또는 열의 갯수를 빼면
	printf("%d", sum - max);

}