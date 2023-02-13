#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int N, from, to, cnt;
vector<pair<int, int>> times;
 
 
int Input() {
    cin >> N;
    
    for(int i=0; i<N;i++){
        cin >>from >> to;
        times.push_back({to, from});
    }
}

int Solution(vector<pair<int, int>> v){
    int next;
    sort(v.begin(), v.end());

    next=v[0].first;
    cnt = 1;
    for(auto i=1; i<N; i++){
        if(next <= v[i].second){
            cnt++;
            next= v[i].first;
        }
    }

        return cnt;   
    }

    void Output(){
        cout<<Solution(times) << endl;
    }
    void Solve(){
        Input();
        Output();
    }

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        Solve();

        return 0;
    }