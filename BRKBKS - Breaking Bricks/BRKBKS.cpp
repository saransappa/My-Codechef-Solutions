#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
		int s,w1,w2,w3;
		cin>>s>>w1>>w2>>w3;
		int x=w1,y=w2,z=w3;
		int cnt1=0,cnt2=0;
		if(x+y+z<=s){cnt1++;x=0,y=0,z=0;}
		else{
			if(x+y!=0 &&x+y<=s){cnt1++;x=0;y=0;}
			else if(x+y!=0 && x<=s){cnt1++;x=0;}
			if(y+z!=0 && y+z<=s){cnt1++;y=0;z=0;}
			else if(y+z!=0 && y<=s){cnt1++;y=0;}
			if(z!=0 && z<=s){cnt1++;z=0;}
		}	
		x=w3,y=w2,z=w1;
		if(x+y+z<=s){cnt2++;x=0,y=0,z=0;}
		else{
			if(x+y!=0 &&x+y<=s){cnt2++;x=0;y=0;}
			else if(x+y!=0 && x<=s){cnt2++;x=0;}
			if(y+z!=0 && y+z<=s){cnt2++;y=0;z=0;}
			else if(y+z!=0 && y<=s){cnt2++;y=0;}
			if(z!=0 && z<=s){cnt2++;z=0;}
		}
		
		int k=min(cnt1,cnt2);
		cout<<k<<endl;
	}
	return 0;	
}
