#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {

		//��ü������ Ʈ����� *�����ϰ� �����ٶ�
		for (int j = 1; j <=n- i; j++) {
			printf(" ");
		}

		if (i == 1 || i == n) {
			//ù���̶� ���������϶� *���
			for (int j = 1; j <= 2 * i - 1; j++) {
				printf("*");
			}
		}
		else {
			//ù��, �������� �����ϰ� ������ ������ָ鼭 *���
			printf("*");
			for (int j = 0; j < 2 * i - 3; j++) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
		
	}

}
