#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define ll long long 
#define pb push_back
#define elif else if

/*Code starts from here */

int main() {
    int n,k;
    cin>>n>>k;
    map <int,int> m;
    string s;
    int p;
    int open = 0;
    for(int i=0;i<k;i++){
        cin>>s;
        if(s=="CLICK"){
            cin>>p;
            if(m[p]==0){
                m[p]=1;
                open++;
            }
            else {
                m[p]=0;
                open--;
            }
        }
        elif(s=="CLOSEALL"){
            for(int j=1;j<=n;j++){
                m[j] = 0;
            }
            open = 0;
        }
        cout<<open<<endl;
    }
	return 0;
}