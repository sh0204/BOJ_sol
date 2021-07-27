#include <iostream>
using namespace std;

int main() {

	
	int student[1001][6];
	int count[1001]; //카운트 해줄 배열

	int n;
	scanf("%d", &n); //학생 수 입력


	//배열 초기화 해줌
	for (int i = 0; i < n; i++) {
		count[i] = 0;
	}

	// 학생들 반 입력
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 5; j++) {
			scanf("%d", &student[i][j]);
		}
	}

	// 학생들끼리 비교
	for (int i = 1; i <= n; i++) { 
		for (int j = 1; j <= n; j++) { 
			for (int k = 1; k <= 5; k++) { //학년
				if (student[i][k] == student[j][k]) {
					count[i]++; //같은 반 이였으면
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
		// 임시반장 가능이 여러명이면
		/*else if (count[i] == max) {
			if (result > i) {
				result = i;
			}
		}*/
	}

	printf("%d", result);
}