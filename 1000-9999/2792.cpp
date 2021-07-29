#include <iostream>
#include <algorithm>
int n, m;
long long jew[300001];
long long Max = 0;
long long result=1000000000;
using namespace std;

int main() {
	
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%lld", &jew[i]);
		Max = max(Max, jew[i]); //ÃÖ´ñ°ª ¼³Á¤
	}
	
	long long left = 1, right = Max;

	while (left <= right) {
		long long mid = (left + right) / 2;
		long long cnt = 0;

		for (int i = 0; i < m; i++) {
			cnt += jew[i] / mid;
			if (jew[i] % mid != 0) {
				cnt++;
			}
		}
		if (cnt <= n) {
			right = mid - 1;
			if (mid < result)
				result = mid;
		}
		else
			left = mid + 1;
	}
	printf("%lld", result);

}