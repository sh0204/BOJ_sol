#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n,answer;
	int yes = 0;
	int no = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
	
		scanf("%d", &answer);
		if (answer == 0) 
			no++;
		else 
			yes++;
	}
	if (yes > no)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute");
}