#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        cin>>k;
        k--;
        int p=a[k];
        sort(a,a+n);
        int q=0;
        for(int j=0;j<n;j++){
            if(a[j]==p){
                q=j;
                break;
            }
        }
        cout<<q+1<<endl;
    }
	return 0;
}
