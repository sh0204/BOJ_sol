#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

int main(void) {

	int n, m;
	scanf("%d %d", &n, &m);

	string arr = to_string(n); //int형을 string으로 변환
	int size = arr.length();

	if (size * n > m) { //m보다 길이가 길면

		int k = m / size;

		for (int i = 0; i < k; i++) { //m에서 n길이 나눈 것까지 반복해서
			printf("%s", arr.c_str());
		}

		k = m % size;//나머지 길이 만큼은
		for (int i = 0; i < k; i++) {
			printf("%c", arr[i]); //string 인덱스로 접근해서 출력
		}
	}
	else {
		for (int i = 0; i < n; i++) {//그냥 n을 n번 출력 해줌
			printf("%s", arr.c_str());
		}
	}
	return 0;
}
