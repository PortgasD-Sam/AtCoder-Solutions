#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    ll n{},k{},q{};
    cin>>n>>k>>q;
    ll temp = k-q;
    ll A[n]{};
    for(ll i=0;i<n;i++){
        A[i] = temp;
    }
    while(q--){
        ll p{};
        cin>>p;
        A[p-1]++;
    }
    for(ll i=0;i<n;i++){
        if(A[i]<=0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
