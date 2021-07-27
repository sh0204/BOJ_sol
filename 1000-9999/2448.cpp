#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//삼각형 높이 n, 삼각형 밑변 2n-1
char arr[3073][6244];

void star(int N, int x, int y) {
	if (N == 3) { //높이가 3인 삼각형 = 최소 삼각형 

		//arr[높이][밑변]

		//첫째줄
		arr[y][x] = '*'; 
		// 둘째줄
		arr[y + 1][x - 1] = '*'; 
		arr[y + 1][x + 1] = '*'; 
		//셋째줄
		for (int i = x - 2; i <= x + 2; i++) {
			arr[y + 2][i] ='*';
		}
		return;
	}
	star(N/ 2, x, y); //위의 삼각형 높이, 꼭대기 좌표
	star(N / 2, x - (N / 2), y + (N / 2)); // 왼쪽 아래 높이, 꼭대기 좌표
	star(N / 2, x + (N / 2), y + (N / 2)); // 오른쪽 아래 높이, 꼭대기 좌표
}
int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) { //높이
		for (int j = 0; j < 2 * N - 1; j++) { //밑변
			arr[i][j] = ' '; //배열 초기화
		}
	}
	star(N, N-1, 0);//삼각형 높이, 삼각형 맨위 꼭짓점 좌표
	
	for (int i = 0; i < N; i++) { //높이
		for (int j = 0; j < 2 * N - 1; j++) { //밑변
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

}