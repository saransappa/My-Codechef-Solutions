#include <bits/stdc++.h>
using namespace std;

int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;   
    }
}

int main() {
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        long long int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=min(a[i],b[i]);
        }
        cout<<sum<<endl;
    }
	return 0;
}
