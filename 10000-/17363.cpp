#include<iostream>	
using namespace std;
char arr[101][101];
char a[10] = { '.', 'O', '|', '-', '/', '\\', '^', '<', 'v', '>' };
char b[10] = { '.', 'O', '-', '|', '\\', '/', '<', 'v', '>', '^' };

int main() {
	int n, m;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < 10; k++) {
				if (arr[i][j] == a[k]) {
					arr[i][j] = b[k];
					break;
				}
			}
		}
	}
	for (int i = m - 1; i >= 0; i--) {
		for (int j = 0; j < n; j++) {
			printf("%c", arr[j][i]);
		}
		printf("\n");
	}
}