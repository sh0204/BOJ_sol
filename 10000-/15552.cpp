#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);

	int A, B;
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
}