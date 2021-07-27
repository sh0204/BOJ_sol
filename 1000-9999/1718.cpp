#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {

	char arr[30001];
	char result[30001];
	char key[30001];
	char word;
	int k;

	scanf("%[^\n]s", arr); //평문 입력
	scanf("%s", key);//암호화 키 입력

	int alen = strlen(arr);
	int klen = strlen(key);

	for (int i = 0; i < alen; i++) {

		word = arr[i];

		//평문이 공백인지 아닌지
		if (word != ' ') {
			// 키의 문자가 알파벳 몇번째인지 계산
			// 키 문자는 키 길이만큼 반복
			//love는 0,1,2,3 인덱스 반복

			k = key[i % klen] - 96; //알파벳 몇번째인지 계산
			/*key[i % klen]는 암호화 문자 뭔지 안거
				-96은 아스키 코드 중에서 알파벳 a 시작
				내가 가진 알파벳의 아스키 코드에서 아스키 코드 시작을 빼면 알고 싶은 알파벳의 순서를 알지*/

				//평문에서 알파벳 순서대로 땡기기

			result[i] = (word - k < 97 ? (word - k + 26) : word - k);
		}
		else {
			//평문이 공백이면
			result[i] = ' ';
			//결과값에 공백 추가
		}
	}
	printf("%s\n", result);
}