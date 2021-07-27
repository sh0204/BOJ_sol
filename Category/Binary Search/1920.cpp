#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arrN[100001];
int arrM[100001];

void find(int n, int key) {
	int left = 0;
	int right = n - 1;

	while (left <= right) {
		int mid = (left + right) / 2; //�߰� �� �ε���

		if (arrN[mid] == key) { //���� ������
			printf("1\n");
			return;
		}
		else if (arrN[mid] > key) { // key���� �迭�� �߾� ������ ������ = �������� 
			right = mid - 1;
		}
		else { //key�� �迭�� �߾Ӱ����� Ŭ�� = ����������
			left = mid + 1;
		}

	}
	printf("0\n");
	return;
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arrN[i]);
	}
	sort(arrN, arrN + n);//�������� ����

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &arrM[i]);
		find(n, arrM[i]);
	}
	
}