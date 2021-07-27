#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);

	int sum = 0;
	for (int i = 1; i <= N; i++) {
		sum += i;
	}
	printf("%d", sum);
}