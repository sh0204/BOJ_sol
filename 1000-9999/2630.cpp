#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int paper[128][128];
int white = 0;
int blue = 0;
int N;

void count(int n, int x, int y) {
	int color = paper[x][y];

	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {

			//색이 다르면 4등분
			if (paper[i][j] != color) {
				count(n / 2, x, y); //nw
				count(n / 2, x + n / 2, y); //sw
				count(n / 2, x, y + n/2 ); //ne
				count(n / 2, x + n / 2, y + n/2); //se
				return;

			}
		}
	}
	if (color == 1)
		blue++;
	else
		white++;
}

int main() {
	scanf("%d", &N);//한 변의 길이
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &paper[i][j]);
		}
	}
	count(N,0, 0);

	printf("%d\n%d", white, blue);
}