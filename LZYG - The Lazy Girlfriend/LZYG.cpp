#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        float m,n,k,l;
        cin>>m>>n>>k>>l;
        float hour=0;
        int task=0;
        for(float j=0;j<n;j++){
            hour++;
            task++;
            if(hour>=l){
                j+=k;
                hour=0;
            }
        }
        cout<<task<<endl;
    }
	return 0;
}
