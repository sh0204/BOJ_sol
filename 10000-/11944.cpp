#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

int main(void) {

	int n, m;
	scanf("%d %d", &n, &m);

	string arr = to_string(n); //int���� string���� ��ȯ
	int size = arr.length();

	if (size * n > m) { //m���� ���̰� ���

		int k = m / size;

		for (int i = 0; i < k; i++) { //m���� n���� ���� �ͱ��� �ݺ��ؼ�
			printf("%s", arr.c_str());
		}

		k = m % size;//������ ���� ��ŭ��
		for (int i = 0; i < k; i++) {
			printf("%c", arr[i]); //string �ε����� �����ؼ� ���
		}
	}
	else {
		for (int i = 0; i < n; i++) {//�׳� n�� n�� ��� ����
			printf("%s", arr.c_str());
		}
	}
	return 0;
}
