#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void task(){
    int n;
    ll k;
    scanf("%d%lld", &n ,&k);
    stack<int> st;
    vector<int> resp(n+1);
    vector<ll> vet(n+1);
    for(int i=0;i<n;i++){
        scanf("%lld", &vet[i]);
    }

    for(int i=0;i<n+n;i++){
        int index = i % n;
        if(i >= n && st.empty()) break;
        while(!st.empty()){
            ll current = vet[index];
            ll dif = i - st.top();
            ll val = vet[st.top()] + (dif * k);
            if(val > current){
                resp[st.top()] = index;
                st.pop();
            }else{
                break;
            }
        }
        if(i < n){
            st.push(i);
        }
    }

    for(int i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d", resp[i] + 1);
    }
    printf("\n");
}

int main(){
    int t = 1;
    //scanf("%d",&t);
    while(t--){
        task();
    }
    return 0;
}
