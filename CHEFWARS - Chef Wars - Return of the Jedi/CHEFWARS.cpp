#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int h,p;
        cin>>h>>p;
        while(h>0 && p>0){
            h-=p;
            p /=2;
        }
        if(h<=0){
            cout<<"1"<<endl;
        }
        else if(p<=0){
            cout<<"0"<<endl;
        }
    }
	return 0;
}
