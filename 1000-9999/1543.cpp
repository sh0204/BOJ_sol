#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(void) {
	
	char arr[2501];
	char search[51];

	scanf("%[^\n]s", arr);
	getchar();
	scanf("%[^\n]s", search);



	int alen = strlen(arr);
	int slen = strlen(search);
	
	
	int count = 0;

	for (int i = 0; i < alen; i++) {
		bool chk = true;
		for (int j = 0; j < slen; j++) {
			if (arr[i + j] != search[j]) {
				chk = false;
				break;
			}
		}
		if (chk) {
			count++;
			i += slen - 1;
		}
	}
	printf("%d", count);
}