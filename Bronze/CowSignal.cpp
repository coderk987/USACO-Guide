#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    freopen("cowsignal.in","r", stdin);
    freopen("cowsignal.out","w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<string> signal;
    int m,n,k;
    cin>>m>>n>>k;
    for(int a=0;a<m;a++){
        string s;
        cin>>s;
        for(int b=0;b<k;b++){
            for(int c=0;c<n;c++){
                for(int d=0;d<k;d++) cout<<s[c];
            }
            cout<<endl;
        }
    }
}