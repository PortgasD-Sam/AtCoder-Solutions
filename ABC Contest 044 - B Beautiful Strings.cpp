    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int main()
    {
        string s;
        cin>>s;
        int a{};
        for(int i=0;i<s.size();i++){
            a^=s[i];
        }
        if(a==0){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        return 0;
    }
