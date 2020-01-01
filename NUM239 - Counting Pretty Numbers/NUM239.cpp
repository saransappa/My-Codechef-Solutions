#include <bits/stdc++.h>
using namespace std;

int nums(int a,int b){
    int count=0;
    for(int i=a;i<b;i++){
        if(i%10==2 || i%10==3 || i%10==9){
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin>>t;
    for(int s=0;s<t;s++){
        int a,b;
        cin>>a>>b;
        int k,l;
        k=a-a%10;
        l=b+(10-b%10);
        int h= (l-k)/10;
        h*=3;
        int p,q;
        p=nums(k,a);
        q=nums(b+1,l);
        h-=p;
        h-=q;
        cout<<h<<endl;
    }
	return 0;
}
