#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	int n;
	
	while (1) {

		scanf("%d", &n);

		if (n == 0)
			return 0;

		int reverse = 0;
		int tmp = n;

		while (n > 0) {

			reverse *= 10;
			reverse += n % 10;
			n /= 10;
			
		}
		if (tmp == reverse) {
			printf("yes\n");
		}
		else
			printf("no\n");
	}
}