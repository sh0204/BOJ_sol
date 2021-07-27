#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	
	while (1) {
		int n;
		vector <pair<string, string>> v;
		scanf("%d", &n);

		for (int i = 0; i < n; i++) {
			char arr[30];
			scanf("%s", arr);

			string str = arr;
			for (int j = 0; j < str.length(); j++) {
				if ('A' <= str[j] && str[j] <= 'Z')
					str[j] += ('a' - 'A');
			}
			v.push_back({ str,(string)arr });
		}
		if (!n) break;

		sort(v.begin(), v.end());

		printf("%s\n", v[0].second.c_str());
	}

}