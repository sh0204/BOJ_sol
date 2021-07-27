#include <iostream>
#include <algorithm>
#include <string>

#define MAX 15
char arr[5][MAX];

int main() {

	for (int i = 0; i < 5; i++) {
		scanf("%s", &arr[i]);
	}
	for (int j = 0; j < MAX; j++) {
		for (int k = 0; k < 5; k++) {
			if (arr[k][j] == NULL)
				continue;
			else
				printf("%c", arr[k][j]);
		}
	}
	printf("\n");
	return 0;
}