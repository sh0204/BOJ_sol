#include <iostream>
#include <algorithm>

using namespace std;
int les[100001];
int N, M;

bool find(int mid) {
	int cnt = 1; //블루레이 수
	int sum = 0;

	for (int i = 0; i < N; i++) {
		if (les[i] > mid) {
			return false; 
			//곡 하나가 녹음시간보다 길 수 없
		}
		sum += les[i];
		if (sum > mid) {
			sum = les[i];
			cnt++;
		}
	}
	return M >= cnt;
}

int main() {
	scanf("%d %d", &N, &M);

	int sum = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d",&les[i]);
		sum += les[i];
	}
	int left =1;
	int right = sum;
	int result = 0;

	while (left <= right) {
		int mid = (left + right) / 2;
		if (find(mid)) {
			result = mid;
			right = mid - 1;
		}
		else 
			left = mid + 1;
	}

	printf("%d", result);
	
}