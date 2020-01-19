#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        int a[n];
        for(int u=0;u<n;u++){
            cin>>a[u];
        }
        sort(a,a+n);
        int min=1000000000;
        for(int i=n-1;i>0;i--){
            if(a[i]-a[i-1]<=min){
                min=a[i]-a[i-1];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}