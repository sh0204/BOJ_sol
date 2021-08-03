#include <iostream>
#include <algorithm>

using namespace std;
int test;
int n, m;
int dp[31][31];

int find(int n, int m) {
	if (dp[m][n] == 0)
		dp[m][n] = find(n, m - 1) + find(n - 1, m - 1);
	return (dp[m][n]); 
}

int main() {
	
	scanf("%d", &test);

	for (int i = 0; i < 30; i++)
		for (int j = 0; j < 30; j++)
			dp[i][j] = 0;

	/*for (int i = 0; i < 30; i++) {
		dp[i][i] = 1;
		dp[i][0] = 1;
	}*/

	for (int i = 0; i < test; i++) {
		scanf("%d %d", &n, &m);
		printf("%d\n", find(n, m));
	}
	return 0;
}