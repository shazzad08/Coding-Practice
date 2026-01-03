//Problem:
//https://www.codechef.com/problems/OZ1




#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string s;
        cin>>s;
        int zero=0;
        int one=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
                if(s[i] == '0') zero++;
                else one++;

                if(one>=zero){
                    ans++;
                }



        }
        cout<<ans<<endl;




    }
    return 0;
}
