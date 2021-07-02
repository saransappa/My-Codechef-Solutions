#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define ll long long 
#define pb push_back
#define elif else if

template <typename... T>
void read(T&... args){          // Function to read multiple arguments
    ((cin>>args), ...);
}

template <typename... T>
void write(T&... args){          // Function to write multiple arguments
    ((cout<<args<<" "), ...);
}

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

/*Code starts from here */

void solve(){
    int N,H,x;
    cin>>N>>H>>x;
    int T[N];
    int maxi = INT_MIN;
    for(int i=0;i<N;i++){
        cin>>T[i];
        maxi = max(maxi,T[i]);
    }
    int req = H - x;
    if(maxi>=req)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    //int t;   
    //cin>>t;
    //for(int y=0;y<t;y++){
        solve();
    //}
	return 0;
}