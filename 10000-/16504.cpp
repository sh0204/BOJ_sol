#include <iostream>

using namespace std;

int main() {
	
	int n; //색종이 길이
	int k; //들어오는 정수 값
	long long sum = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		for (int j= 0; j < n; j++) {
			
			scanf("%d", &k);
			sum += k; //들어오는 정수값 계속 더해줌
		}
	}
	printf("%lld\n", sum);
}