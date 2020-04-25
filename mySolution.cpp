#include <bits/stdc++.h>
#define pb push_back


using namespace std;
const int MAXN = 100005;
typedef long long ll;

map<string,int> M;
int main() {
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    int n;
    string s;
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        bool bol = 1;
        for(int j=0;j<=n-i;j++){
            string str = "";
            for(int z=j;z<j+i;z++){
                str += s[z];
            }
            if(M[str] == 1){
                bol = 0 ;
                break;
            }
            M[str] = 1;
        }
        if(bol == 1){
            cout<<i;
            return 0;
        }
    }
    return 0;
}

