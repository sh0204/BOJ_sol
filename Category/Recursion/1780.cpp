#include<iostream>

using namespace std;

int paper[2200][2200];
int result[3];
//result[0]=-1로 채워진 종이 갯수
//result[1]=0로 채워진 종이 갯수
//result[2]=1로 채워진 종이 갯수

bool same(int y, int x, int N) {
	int start = paper[y][x]; //시작점
	for (int i = y; i < y + N; i++)
		for (int j = x; j < x + N; j++)
			if (start!= paper[i][j])
				return false;
	return true;
}


int visit(int y, int x, int N) {
	if (same(y, x, N)) {
		result[paper[y][x]+1]++;
		//paper[][]가 -1이면 result[0]이 -1이 표시된 종이니까 +1 해줌
	}
	//수가 동일하지 않다면, 9등분
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
