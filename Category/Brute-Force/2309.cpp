#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// ��ü ���տ��� 100���� ���� ���� ��= �θ��� ��¥ ������ Ű�� ��
int main() {

	int arr[9];
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]); //Ű �迭�� �־��ֱ�
		sum += arr[i]; // ����
	}

	sort(arr, arr + 9);//������������ ����

	for (int i = 0; i < 8; i++) {
		for (int j = 1; j < 9; j++) {
			if (sum - (arr[i] + arr[j]) == 100) {
				for (int k = 0; k < 9; k++) {
					if (arr[k] != arr[i] && arr[k] != arr[j])
						printf("%d\n", arr[k]);
				}
				return 0;
			}
		}
	}
	
}