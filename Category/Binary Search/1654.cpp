#include <iostream>
#include <algorithm>
using namespace std;
int k, n; // k = 영식이가 가짐, n = 필요한 랜선 개수
long long length[10001];

long long find(long long left, long long right) {
	//랜선의 길이를 최소가 1이고, 최대 Max로 설정해서 탐색시작

	while (left <= right) {
		int sum = 0;
		long long mid = (left + right) / 2; // 중간값
		for (int i = 0; i < k; i++) {
			sum += length[i] / mid; //sum은 랜선들을 mid로 나눈 몫들의 합
									//이걸 n과 비교해줘야함
		}
		if (sum >= n) {
			//찾은 갯수가 원하는 n보다 크면 더 큰 수로 나눠줘야함
			left = mid + 1;
		}
		else {
			//찾은 갯수가 n보다 작으면, 더 작은 수로 나눠줘야함
			right = mid - 1;
		}
	}
	return right;
}
int main() {
	long long Max = 0;

	scanf("%d %d", &k, &n);
	for (int i = 0; i < k; i++) {
		scanf("%lld", &length[i]);
		
		// 가지고 있는 랜선들 중 가장 긴 것을 Max로 설정
		Max = max(length[i], Max);
	}
	printf("%lld\n", find(1, Max));
	return 0;
}