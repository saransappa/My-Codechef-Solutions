#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i]%k;
        }
        cout<<sum%k<<endl;
    }
	return 0;
}
