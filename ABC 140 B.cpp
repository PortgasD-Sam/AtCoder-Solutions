#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    ll n{};
    cin>>n;
    n++;
    ll A[n]{};
    ll B[n]{};
    ll C[n-1]{};
    for(ll i=1;i<n;i++){
        cin>>A[i];
    }
    for(ll i=1;i<n;i++){
        cin>>B[i];
    }
    for(ll i=1;i<n-1;i++){
        cin>>C[i];
    }
    ll sum = B[A[1]];
    for(ll i=2;i<n;i++){
        sum+=B[A[i]];
        if(A[i]==A[i-1]+1){
            sum+=C[A[i-1]];
        }
    }
    cout<<sum<<endl;
    return 0;
}