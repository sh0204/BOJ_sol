#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	char arr[5];
	int	m;
	scanf("%s %d", arr, &m);
	string n = arr;
	string result;

	int len = n.length();
	int num = n;

	if (len * n >= M) {
		int count = 0;
		while (1) {
			if (count + len > M)
				break;
			result += n;
			count += len;
		}
		for (int i = 0; i < M - count; i++) {
			result += arr[i];
		}
	}
	else {
		for (int i = 0; i < num; i++)
		{
			result += n;
		}

	}
	printf("%d\n", result);
}