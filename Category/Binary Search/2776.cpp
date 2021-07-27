#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, m;

int note1[1000001];
int note2[1000001];

void find(int n, int key) {
	int left = 0;
	int right = n - 1;

	while (left <= right) {
		int mid = (left + right) / 2; //중간 값 인덱스

		if (note1[mid] == key) { //수가 같으면
			printf("1\n");
			return;
		}
		else if (note1[mid] > key) { // key값이 배열의 중앙 값보다 작을때 = 왼쪽으로 
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

	int test;
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &note1[j]);
		}
		sort(note1,note1+n); //오름차순 정렬

		scanf("%d", &m);
		for (int j = 0; j < m; j++) {
			scanf("%d", &note2[j]);

			find(n,note2[j]);
		}
	}
}