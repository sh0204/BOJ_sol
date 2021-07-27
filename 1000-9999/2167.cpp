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
			scanf("%d", &arr[i][j]); //�迭 �־��ֱ�
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			//(1,1)���� (n,m)������ �簢���� ���̸� �̸� ���� ���س��´�.
			sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + arr[i][j];
		}
	}

	
	int num; //���� ���� ����	
	scanf("%d", &num);

	while(num--){

		int a, b, x, y; // �� ���� ����
		scanf("%d %d %d %d", &a, &b, &x, &y);

		//���ϰ��� �ϴ� ����������� �簢����  ���ϱ� ���ؼ��� ��ü �簢���� ���̿��� ����
		printf("%d\n", sum[x][y] - sum[x][b - 1] - sum[a - 1][y] + sum[a - 1][b - 1]);

	}

}