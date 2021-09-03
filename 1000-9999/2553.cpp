#include<iostream>
using namespace std;

long long n, result;

int main()
{
	scanf("%lld",&n);
	result = 1;

	for (int i = 1; i <= n; i++)
	{
		result *= i;
		result %= 10000000; 
		while (result % 10 == 0)
			result /= 10;
	}
	printf("%lld\n",result%10);

	
}