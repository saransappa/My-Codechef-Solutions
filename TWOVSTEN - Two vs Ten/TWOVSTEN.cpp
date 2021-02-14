#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define ll long long 
#define pb push_back
#define elif else if

/*Code starts from here */

void solve(){
    int n;
    cin>>n;
    if(n%10==0){
        cout<<0<<endl;
    }
    elif((n*2)%10==0){
        cout<<1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;   
    cin>>t;
    for(int y=0;y<t;y++){
        solve();
    }
	return 0;
}