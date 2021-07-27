/*
#include <stdio.h>
int main() {

	int n;
	int sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i *= 10) {
		sum += (n - i + 1);
	}
	printf("%d", sum);
}
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;

	for (int i = 1, len = 1; i <= n; i *= 10, len++) {
		int end = i * 10 - 1;
		if (end > n) {
			end = n;
		}
		sum += (end - i + 1) * len;
	}
	printf("%d", sum);
}