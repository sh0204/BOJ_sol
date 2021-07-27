#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int L, C;
char alpa[16];

void makepassword(int pos, string password, int vow, int con) { //vow ����, con ����
	int length = password.size();
	if (length == L) {
		if (vow >= 1 && con >= 2) { //����, ���� ���� ���� ����
			printf("%s\n", password.c_str()); //���
			return;
		}
	}
	else {
		for (int i = pos; i < C; i++) {
			if (alpa[i] == 'a' || alpa[i] == 'e' || alpa[i] == 'i' || alpa[i] == 'o' || alpa[i] == 'u') {
				makepassword(i + 1, password + alpa[i], vow + 1, con);
			}
			else {
				makepassword(i + 1, password + alpa[i], vow, con + 1);
			}
		}
		return;
	}

}

int main(void) {
	scanf("%d %d", &L, &C);
	for (int i = 0; i < C; i++) {
		cin >> alpa[i];
	}
	sort(alpa, alpa + C);
	makepassword(0, "", 0, 0);
}

