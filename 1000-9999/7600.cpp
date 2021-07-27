#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	char arr[260];

	while (1) {
		int count=0; //중복 글자가 아닐때 하나씩 증가
		int check = 0; //중복 글자인지 체크
		int sum=0;
		scanf("%[^\n]s", arr);
		getchar();
		
		if (arr[0] == '#') {
			return 0;
		}
		for (int i = 65; i <= 90; i++) {//아스키 코드 대문자
			for (int j = 0; j < strlen(arr); j++) {
				if ((arr[j] == i) || (arr[j] == i + 32)) {
					//대문자 소문자 사이의 차 = 32
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