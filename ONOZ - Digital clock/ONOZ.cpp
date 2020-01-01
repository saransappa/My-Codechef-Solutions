#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int o=0;o<t;o++){
	    int h,m;
	    cin>>h>>m;
	    int count=0;
	    for(int i=0;i<h;i++){
	        for(int j=0;j<m;j++){
	            string s="";
	            s+=to_string(i);
	            s+=to_string(j);
	            char t = s[0];
	            int c=0;
	            for(int k=0;k<s.length();k++){
	                if(t==s[k]){c++;}
	            }
	            if(c==s.length()){count++;}
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
