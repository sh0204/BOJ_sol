#include <iostream>
#include <algorithm>

using namespace std;
int tri[501][501]; //각 위치의 값
int dp[501][501] = { 0, }; // 그 위치로 갔을 때 합

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) { //tri 배열에 입력받기
		for (int j = 1; j <= i; j++) {
			scanf("%d", &tri[i][j]);
		}
	}
	dp[1][1] = tri[1][1];
	for (int i = 2; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + tri[i][j];
		}
	}

	int Max = 0;
	for (int i = 1; i <= n; i++) {
		if (Max < dp[n][i])
			Max = dp[n][i];
	}

	printf("%d", Max);
}