#include <iostream>
#include <algorithm>
#include <string>

int main() {

	int arr[1001];
	int count = 0;
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i <= n; i++) { //배열 초기화
		arr[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) { //배열의 요소가 0이면
			continue;
		}
		else {
			for (int j = i; j <= n; j+=i) {//소수의 배수들
				if (arr[j] != 0) { //아직 안지워졌으니까 0으로 지워줌
					arr[j] = 0;
					count++; //지울때마다 카운트 해줌
				}
				if (count == k) {//목표 횟수이므로
					printf("%d", j); 
					break; //종료
				}
			}
		}
	}
}