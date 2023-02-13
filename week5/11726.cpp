#include <iostream>
using namespace std;

int arr[10001];

int main() {
	int T;
	cin >> T;

    arr[0] = 1;
	arr[1] = 1;

	for (int i = 0; i <= T-1; i++) {
		arr[i+2] = (arr[i] + arr[i+1])%10007;
	}
	cout << arr[T] ;

}