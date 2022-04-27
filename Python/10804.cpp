#include <algorithm>
#include <iostream>
using namespace std;

//reverse함수를 이용해서 뒤집어줌

int main() {
int arr[22], a, b;

for(int i=1; i<=20; i++) 
    arr[i]=i;
for(int i=0; i<10; i++) {
    cin >> a >> b;
    reverse(arr+a, arr+b+1);
}
for(int i=1; i<=20; i++)
    cout << arr[i] << ' ';
}