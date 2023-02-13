#include <iostream>
using namespace std;

int N;
int DP[10001];
int arr[10001] = {0, };

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> arr[i];
	
    DP[1] = arr[1];
    DP[2] = arr[1] + arr[2];
    DP[3] = max(arr[1], arr[2])+arr[3];
    for(int i = 4; i <= N; i++)
        DP[i] = max(max(DP[i-4] + arr[i-1], DP[i-3] + arr[i-1]), DP[i-2]) + arr[i];
    
    cout << max(DP[N-1], DP[N]) << '\n';
}
