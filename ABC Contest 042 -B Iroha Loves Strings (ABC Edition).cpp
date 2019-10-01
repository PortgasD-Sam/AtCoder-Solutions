    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long

    int main()
    {
        ////////////////////////////////////////////////

        ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
     	cout.tie(NULL);

        ////////////////////////////////////////////////

        ll t{},n{};
        string p;
        cin>>t>>n;
        std::vector<string> v(t) ;
        for(int i=0;i<t;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<t;i++){
            cout<<v[i];
        }
        cout<<p<<endl;
        return 0;
    }
