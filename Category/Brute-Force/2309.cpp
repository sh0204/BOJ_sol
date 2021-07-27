#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 전체 총합에서 100빼면 남은 숫자 합= 두명의 가짜 난쟁이 키의 합
int main() {

	int arr[9];
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]); //키 배열에 넣어주기
		sum += arr[i]; // 총합
	}

	sort(arr, arr + 9);//오름차순으로 정렬

	for (int i = 0; i < 8; i++) {
		for (int j = 1; j < 9; j++) {
			if (sum - (arr[i] + arr[j]) == 100) {
				for (int k = 0; k < 9; k++) {
					if (arr[k] != arr[i] && arr[k] != arr[j])
						printf("%d\n", arr[k]);
				}
				return 0;
			}
		}
	}
	
}