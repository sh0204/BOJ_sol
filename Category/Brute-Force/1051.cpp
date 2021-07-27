#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n, m; //n 가로 m 세로
int arr[50][50];

int Square(void) {
	int result = 1;
	int size = min(n, m); //정사각형 길이 중 최대로 긴 것 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 1; k < size; k++) {
				if (i + k < n && j + k < m && arr[i + k][j] == arr[i][j] && arr[i + k][j + k] == arr[i][j] && arr[i][j + k] == arr[i][j]) {
					result = max(result, k + 1);
				}				
			}
		}
	}
	return result * result;
}
int main() {

	
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}
	printf("%d", Square());
	
}
