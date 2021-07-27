#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {

		//전체적으로 트리모양 *제외하고 공백줄때
		for (int j = 1; j <=n- i; j++) {
			printf(" ");
		}

		if (i == 1 || i == n) {
			//첫줄이랑 마지막줄일때 *찍기
			for (int j = 1; j <= 2 * i - 1; j++) {
				printf("*");
			}
		}
		else {
			//첫줄, 마지막줄 제외하고 공백을 만들어주면서 *찍기
			printf("*");
			for (int j = 0; j < 2 * i - 3; j++) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
		
	}

}
