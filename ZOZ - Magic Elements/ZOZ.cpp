#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int y=0;y<t;y++){
        int n,k;
        cin>>n>>k;
        int a[n];
        int q,sum=0;
        for(int i=0;i<n;i++){
            cin>>q;
            a[i]=q;
            sum+=q;
        }
        int count=0;
        for(int i=0;i<n;i++){
            int asum = sum-a[i];
            if(asum < a[i]+k){count++;}
        }
        cout<<count<<endl;
    }
	return 0;
}
