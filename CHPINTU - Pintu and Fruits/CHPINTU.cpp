#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int m,n;
        cin>>n>>m;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]--;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int c[m]={0};
        for(int i=0;i<n;i++){
            c[a[i]]+=b[i];
        }
        int min = INT_MAX;
        for(int i=0;i<m;i++){
            bool flag = false;
            for(int j=0;j<n;j++){
                if(a[j]==i){
                    flag = true;
                    break;
                }
            }
            if(flag && c[i]<min){
                min = c[i];
            }
        }
        cout<<min<<endl;
    }
	return 0;
}