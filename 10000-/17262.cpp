#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	int num; //�л� ��
	scanf("%d", &num);

	int late = 0;
	int fast = 100001;

	for (int i = 0; i < num; i++) {
		int s, e; //�, �ϱ�
		scanf("%d %d", &s, &e);

		if (s > late) { //���� �ʰ� �� ��� � 
			late = s;
		}
		if (e < fast) { //���� ���� �� ��� �ϱ�
			fast = e;
		}
	}
	int minus = late - fast;


	if (minus < 0) { //���� �ʰԿ��� ��� � �ð�- ������� ��� �ϱ� < 0 == �ӹ����� �ð� 0
		printf("0");
	}
	else
		printf("%d\n", minus);
}