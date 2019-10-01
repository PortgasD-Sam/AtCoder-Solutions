#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            if(s[i]=='R' || s[i]=='U' || s[i]=='D'){
                continue;
            }
            else{
                cout<<"No"<<endl;
                return 0;
            }
        }
        else{
            if(s[i]=='L' || s[i]=='U' || s[i]=='D'){
               continue;
            }
            else{
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}