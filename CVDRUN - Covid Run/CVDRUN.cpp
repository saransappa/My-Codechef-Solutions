#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl; // Debugging function
#define ll long long 
#define pb push_back
#define elif else if


/*Code starts from here */

void solve(){
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    if(x==y){
        cout<<"YES"<<endl;
    }
    else{
        int z = x;
        x = (x+k)%n;
        bool found = false;
        while(z!=x){
            if(x==y){
                cout<<"YES"<<endl;
                found = true;
                break;
            }
            x = (x+k)%n;
        }
        if(!found)cout<<"NO"<<endl;
    }
}

int main() {
    clock_t start, end;
    /* Recording the starting clock tick.*/
    start = clock(); 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;   
    cin>>t;
    for(int y=0;y<t;y++){
        solve();
    }
    // Recording the end clock tick. 
    end = clock();
    // Calculating total time taken by the program. 
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    //cout << "Time taken by program is : " << fixed << time_taken << setprecision(5); 
    //cout << " sec " << endl; 
	return 0;
}
