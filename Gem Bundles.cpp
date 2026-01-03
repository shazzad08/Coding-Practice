#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int n,c;
        cin>>n>>c;
        int a[101];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        string s;
        cin>>s;
        int cnt=0;
        int sum_normal=0;
        int sum_special=0;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                sum_normal+=a[i];
            }
            else{
                sum_special+=a[i];
            }
            if(s[i]=='1'){
                cnt=1;
            }

        }
        int ans=sum_normal;
        if(cnt==1){

            if(sum_normal>=c && sum_special>c){
                ans=sum_normal+sum_special -c;
            }
        }
        cout<<ans<<endl;
	}

}
