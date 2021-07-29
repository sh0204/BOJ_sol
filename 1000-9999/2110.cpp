#include <iostream>
#include <algorithm>

using namespace std;
int N, C;
int house[200000];
int result = 0;

int main() {
	scanf("%d %d", &N, &C);
	for (int i = 0; i < N; i++) {
		scanf("%d", &house[i]);
	}
	sort(house, house + N); //�������� ����

	int left = 1;
	int right = house[N - 1]; //������ ��

	while (left <= right) {
		int mid = (left + right) / 2;
		int cnt = 1; //house[0]�� ������ ��ġ�ߴٰ� ����
		int start = house[0]; //ù��° ���� ��������

		for (int i = 1; i < N; i++) {
			if (house[i] - start >= mid) {
				start = house[i];
				cnt++; //������ �� �� ������ �Ÿ��� �߰��� �̻����� �Ǹ�
					  //������ ��ġ, ���� ���� ����
			}
		}

		if (cnt >= C) {
			//������ ������ ��ġ ������ ���� ���ؼ� ũ�ų� ������
			left = mid + 1; //������ ������ �Ÿ��� �÷��� ��ġ �� ����
			result = mid;
		}
		else
			right = mid - 1; //������ ���� �Ÿ� �ٿ��� ��ġ �� �ø�
	}
	printf("%d\n", result);
}