#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	char arr[100];
	for (int i = 0; i < n; i++) {
		int wrong;
		scanf("%d %s", &wrong, arr);
		for (int j = 0; j < strlen(arr); j++) {
			if (j != wrong - 1) {
				printf("%c", arr[j]);
			}
		}
		printf("\n");

	}
}