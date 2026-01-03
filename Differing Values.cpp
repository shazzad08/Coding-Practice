
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int n,k;
        cin>>n>>k;



        string s;
        cin>>s;
        bool ans= true;
        //int x=n-1;
        //int y=k-1;
        for(int i=1;i<n-1;i++){
            if(s[i]== s[i+k]){
                ans= false;
                break;
            }
        }
        if(ans){
            cout<<"Yes"<<endl;
        }
        else cout<<"NO"<<endl;
	}
}
