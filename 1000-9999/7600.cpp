#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	char arr[260];

	while (1) {
		int count=0; //�ߺ� ���ڰ� �ƴҶ� �ϳ��� ����
		int check = 0; //�ߺ� �������� üũ
		int sum=0;
		scanf("%[^\n]s", arr);
		getchar();
		
		if (arr[0] == '#') {
			return 0;
		}
		for (int i = 65; i <= 90; i++) {//�ƽ�Ű �ڵ� �빮��
			for (int j = 0; j < strlen(arr); j++) {
				if ((arr[j] == i) || (arr[j] == i + 32)) {
					//�빮�� �ҹ��� ������ �� = 32
					if (check == 0) {
						count++;
						check = 1; 
					}

				}
			}
			check = 0;
			sum += count;
			count = 0;
		}
		printf("%d\n", sum);
	}
}