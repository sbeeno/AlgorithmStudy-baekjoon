//문제 설명
//수열의 크기와 그 크기만큼의 값들이 입력으로 주어짐
//주어진 수열에서 연속된 숫자들의 합들 중에서 가장 최댓값을 구함

//문제풀이
//최댓값을 저장하는 DP라는 배열과 입력으로 주어지는 숫자들을 저장할 ARR 배열2개를 사용
//DP[N]= N번째숫자까지의 최댓값을 의미
//중간중간 음의 정수들도 포함되어 있으므로 숫자 하나하나씩 더해가면서 최댓값을 갱신시켜주면됨
//주어질 수 있는 값의 최대범위는 1000, 수열의 크기의 최대범위는 100000이기 때문에 최댓값을
//계산해보면 int형의 범위를 벗어나므로 long long 자료형을 사용해줘야 통과할 수 있음
//초기 식을 구해보면 DP[0]= Arr[0]
//당연히 0번째 까지의 최댓값은 수열 중 0번째 값이므로
//DP[1]의 경우는 DP[0] + Arr[1] vs Arr[1] 듈 중 최댓값이 됨
//DP[i]=Max(DP[i-1]+Arr[i], Arr[i])

#include <iostream>
#define MAX 100000+1
typedef long long ll;

using namespace std;

int N;
ll Arr[MAX];
ll DP[MAX];
ll Answer;

ll Bigger(ll A, ll B){if(A>B) return A; return B;}

void Input(){
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> Arr[i];
    }
}

void Solution(){
    DP[0]= Arr[0];
    Answer = DP[0];
    for(int i=1; i<N; i++)
    {
        DP[0]=Arr[0];
        Answer = DP [0];
        for(int i=1; i<N; i++)
        {
            DP[i]=Bigger(DP(i-1)+Arr[i], Arr[i]);
            Answer= Bigger(Answer,DP[i]);
        }
    }
}

void Solve()
{
    Input ();
    Solution ();

    cout <<Answer << endl;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}