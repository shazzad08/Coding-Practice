
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int n,m;
        cin>>n>>m;
        double area1=10*10;
        double area2=15*15;

        double s= area1/n;
        double l=area2/m;
        if(s>l){
            cout<<"Small"<<endl;
        }
        else if(s<l){
            cout<<"Large"<<endl;
        }
        else{
            cout<<"Equal"<<endl;
        }








	}

}
