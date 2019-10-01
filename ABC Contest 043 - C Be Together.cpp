    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int main()
    {
        ll n{};
        cin>>n;
        ll A[n]{},ans = INT_MAX;
        for(ll i=0;i<n;i++){
            cin>>A[i];
        }
        for(ll i=-100;i<=100;i++){
            ll sum{0};
            for(int j=0;j<n;j++){
                sum+=(A[j]-i)*(A[j]-i);
            }
            ans=min(sum,ans);
        }
        cout<<ans;
        return 0;

}
