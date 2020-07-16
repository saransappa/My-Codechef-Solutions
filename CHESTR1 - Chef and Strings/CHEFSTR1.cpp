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
    int n;
    cin>>n;
    int a[n];
    long sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int k = abs(a[i]-a[i-1])-1;
        sum+=k;
    }
    cout<<sum<<endl;
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