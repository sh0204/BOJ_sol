#include <iostream>
#include <algorithm>
#include <string>

int main(void)
{
	int n;
	int num;
	int count = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);

		for (int j = 2; j <= num; j++)
		{//소수인지 아닌지 체크
			if (num == j)
				count++;
			if (num % j == 0)
				break;

		}
	}
	printf("%d", count);
}

