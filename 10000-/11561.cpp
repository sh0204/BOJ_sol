#include <iostream>
#include <algorithm>
using namespace std;

//시작이 1이고 끝이 n인 등차수열 합공식
//m(m+1)/2 <= n ==> m(m+1) <=2n
int T;
long long N;

long long cnt(long long m) {
	return m * (m + 1);
}
int main() {
	scanf("%d", &T); //테스트 개수
	for (int i = T; i > 0; i--) {
		scanf("%lld", &N);

		long long left = 0; //시작값
		long long right = N; //끝 값
		long long mid;//중간값
		long long ans = 0;

		while (left <= right) {
			mid = (left + right) / 2;
			if (cnt(mid)> N*2) { //중간보다 작으면 더 작은 수에서 찾음
				right = mid - 1; 
			}
			else { //중간 보다 크면 더 큰 수에서 찾음		
				left = mid + 1;
				ans = mid;
			}
		}
		printf("%lld\n", ans);
	}
}