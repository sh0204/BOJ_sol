#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {

	int p, w;
	scanf("%d %d", &p, &w); 
	//p=버튼 누르는 시간
	//w=같은 문자 연속 누르는 시간

	char arr[1001];
	scanf("%[^\n]arr", arr); //문자열 입력

	char button[30] = { //각 알파벳 몇번인지
		2,2,2,	//abc
		3,3,3,	//def
		4,4,4,	//ghi
		5,5,5,	//jkl
		6,6,6,	//mno
		7,7,7,7,//pqrs
		8,8,8,	//tuv
		9,9,9,9	//wxyz
	};
	char num[30] = { // 각 알파벳에 도달하려면 몇 번 눌러야하는지
		1, 2, 3,	//abc
		1, 2, 3,	///def
		1, 2, 3,	// ghi
		1, 2, 3,	// jkl
		1, 2, 3,	// mno
		1, 2, 3, 4,	// pqrs
		1, 2, 3,	// tuv
		1, 2, 3, 4	// wxyz
	};

	long sum = 0;
	int len = strlen(arr);

	if (arr[len - 1] == '\n')
		len--;

	for (int i = 0; i < len; i++) {
		if (arr[i] == ' ') {

		}
	}
		
}