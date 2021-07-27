#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int arr[301][301];
int sum[301][301];


int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &arr[i][j]); //배열 넣어주기
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			//(1,1)에서 (n,m)까지의 사각형의 넓이를 미리 구해 더해놓는다.
			sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + arr[i][j];
		}
	}

	
	int num; //합을 구할 갯수	
	scanf("%d", &num);

	while(num--){

		int a, b, x, y; // 네 개의 정수
		scanf("%d %d %d %d", &a, &b, &x, &y);

		//구하고자 하는 정수들까지의 사각형을  구하기 위해서는 전체 사각형의 넓이에서 빼줌
		printf("%d\n", sum[x][y] - sum[x][b - 1] - sum[a - 1][y] + sum[a - 1][b - 1]);

	}

}