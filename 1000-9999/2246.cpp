#include <iostream>
#include <algorithm>
#include <string>

#define d first
#define c second
using namespace std;

//��� ���
pair <int, int> condo[100001];

int main() {

	int n; //�ܵ� ����
	scanf("%d", &n);

	for (int i = 0; i < n; i++) { //�ܵ� ���� �Է�
		scanf("%d %d", &condo[i].d, &condo[i].c);		
	}

	bool check;
	int count=0;

	for (int i = 0; i < n; i++) {
		check = false;
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (condo[i].d > condo[j].d) {
					if (condo[i].c >= condo[j].c) {
						check = true;
						break;
					}
				}
				else if (condo[i].c > condo[j].c) {
					if (condo[i].d >= condo[j].d) {
						check = true;
						break;
					}
				}
			}
		}
		if (!check)
			count++;
	}
	printf("%d", count);
}


