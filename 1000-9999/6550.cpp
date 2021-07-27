#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	while (1) {

		string s;
		string t;

		cin >> s;
		cin >> t;

		if (t.find(s) != -1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	
}