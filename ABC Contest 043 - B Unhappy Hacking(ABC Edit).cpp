    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int main()
    {
        io;
        string s;
        cin>>s;
        stack <char> x;
        for(ll i=0;i<s.size();i++){
            if(s[i]!='B'){
                x.push(s[i]);
            }
            else{
                if(!x.empty()){
                    x.pop();
                }
            }
        }
        std::vector<char> v ;
        while(!x.empty()){
            v.push_back(x.top());
            x.pop();
        }

        reverse(v.begin(),v.end());
        for(auto z : v){
            cout<<z;
        }
        return 0;
    }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    io;
    string s;
    cin>>s;
    stack <char> x;
    for(ll i=0;i<s.size();i++){
        if(s[i]!='B'){
            x.push(s[i]);
        }
        else{
            if(!x.empty()){
                x.pop();
            }
        }
    }
    std::vector<char> v ;
    while(!x.empty()){
        v.push_back(x.top());
        x.pop();
    }

    reverse(v.begin(),v.end());
    for(auto z : v){
        cout<<z;
    }
    return 0;
}

