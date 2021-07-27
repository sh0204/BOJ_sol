#include <iostream>
#include <algorithm>
#include <string>


using namespace std;
char arr1[51];
char arr2[51];
string s, t;

string del(string t) { //뒤에서 a제거
	t.pop_back();
	return t;
}

string rev(string t) { //뒤집고 b제거
	reverse(t.begin(), t.end());
	t.pop_back();
	return t;
}

bool check(string s, string t) {
	if (s.size() == t.size()) {
		if (s == t)
			return true;
		else
			return false;
	}
	if (t.size() >= 1) {
		if (t.front() == 'A' && t.back() == 'A')
			return check(s, del(t));
		if (t.front() == 'A' && t.back() == 'B')
			return false;
		if (t.front() == 'B' && t.back() == 'A')
			return check(s, del(t)) || check(s,rev(t));
		if (t.front() == 'B' && t.back() == 'B')
			return check(s, rev(t));

	}
	
}

int main() {
	scanf("%s", &arr1);
	scanf("%s", &arr2);

	string s = arr1;
	string t = arr2;
	
	if (check(s, t))
		printf("1");
	else
		printf("0");
}