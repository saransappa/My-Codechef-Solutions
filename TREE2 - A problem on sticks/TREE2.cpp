#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
	    int n;
	    cin>>n;
	    set <int> s;
	    for(int i=0;i<n;i++){
	        int k;
	        cin>>k;
	        if(k!=0)s.insert(k);
	    }
	    cout<<s.size()<<endl;
	}
	return 0;
}
