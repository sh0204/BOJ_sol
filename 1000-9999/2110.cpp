#include <iostream>
#include <algorithm>

using namespace std;
int N, C;
int house[200000];
int result = 0;

int main() {
	scanf("%d %d", &N, &C);
	for (int i = 0; i < N; i++) {
		scanf("%d", &house[i]);
	}
	sort(house, house + N); //오름차순 정렬

	int left = 1;
	int right = house[N - 1]; //마지막 집

	while (left <= right) {
		int mid = (left + right) / 2;
		int cnt = 1; //house[0]에 공유기 설치했다고 가정
		int start = house[0]; //첫번째 집을 시작으로

		for (int i = 1; i < N; i++) {
			if (house[i] - start >= mid) {
				start = house[i];
				cnt++; //공유기 두 개 사이의 거리를 중간값 이상으로 되면
					  //공유기 설치, 시작 값을 갱신
			}
		}

		if (cnt >= C) {
			//공유기 갯수가 설치 가능한 수와 비교해서 크거나 같으면
			left = mid + 1; //공유기 사이의 거리를 늘려서 설치 수 줄임
			result = mid;
		}
		else
			right = mid - 1; //공유기 사이 거리 줄여서 설치 수 늘림
	}
	printf("%d\n", result);
}