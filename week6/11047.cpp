#include <iostream>
using namespace std;

int A[11];

int main(void){
    int N, K;
    cin >> N >> K ;
    for(int i=0; i<N;i++){
        cin >> A[i];        
    }
    int sum = 0;
    for(int i = N-1; i>=0; i--){
        sum += K/A[i];
        K= K % A[i];    
    }

    cout << sum << endl;
    
}