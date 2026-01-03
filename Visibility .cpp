#include<bits/stdc++.h>
using namespace std;
int main(){

int h,w,x,y;
cin>>h>>w>>x>>y;

char a[101][101];


for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        cin>>a[i][j];
    }

}
int ans=1;
x--;
y--;

for(int i=y+1;i<w;i++){
    if(a[x][i]=='.'){
        ans++;

    }
    else break;
}

for(int i=y-1;i>=0;i--){
    if(a[x][i]=='.'){
            ans++;

    }
    else break;
}

for(int i=x-1;i>=0;i--){
    if(a[i][y]=='.')
    {
        ans++;

    }
    else break;
}

for(int i=x+1;i<h;i++){
    if(a[i][y]=='.') {
        ans++;

    }
    else break;
}

cout<<ans<<endl;
}
