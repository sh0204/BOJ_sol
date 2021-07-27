#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);

	while (n > 0) {
		char arr[31];
		scanf("%s", arr);

		switch (arr[strlen(arr)- 1]) {
		case 'a':
			printf("%ss\n", arr);
			break;
		case 'i':
			printf("%sos\n", arr);
			break;
		case 'y':
			arr[strlen(arr) - 1] = '\0'; //y는 지우고 ios로
			printf("%sios\n", arr);
			break;
		case 'l':
			printf("%ses\n", arr);
			break;
		case 'n':
			arr[strlen(arr) - 1] = '\0'; //n은 지우고 anes로
			printf("%sanes\n", arr);
			break;
		case 'e':
			if (arr[strlen(arr) - 2] == 'n') {
				arr[strlen(arr) - 1] = '\0';
				arr[strlen(arr) - 1] = '\0';
				printf("%sanes\n", arr);
			}
			else
				printf("%sus\n", arr);
			break;
		case 'o':
			printf("%ss\n", arr);
			break;
		case 'r':
			printf("%ses\n", arr);
			break;
		case 't':
			printf("%sas\n", arr);
			break;
		case 'u':
			printf("%ss\n", arr);
			break;
		case 'v':
			printf("%ses\n", arr);
			break;
		case 'w':
			printf("%sas\n", arr);
			break;
		default:
			printf("%sus\n", arr);
			break;
		}
		n--;
	}
}