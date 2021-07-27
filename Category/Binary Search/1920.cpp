#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arrN[100001];
int arrM[100001];

void find(int n, int key) {
	int left = 0;
	int right = n - 1;

	while (left <= right) {
		int mid = (left + right) / 2; //중간 값 인덱스

		if (arrN[mid] == key) { //수가 같으면
			printf("1\n");
			return;
		}
		else if (arrN[mid] > key) { // key값이 배열의 중앙 값보다 작을때 = 왼쪽으로 
			right = mid - 1;
		}
		else { //key의 배열이 중앙값보다 클때 = 오른쪽으로
			left = mid + 1;
		}

	}
	printf("0\n");
	return;
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arrN[i]);
	}
	sort(arrN, arrN + n);//오름차순 정렬

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &arrM[i]);
		find(n, arrM[i]);
	}
	
}