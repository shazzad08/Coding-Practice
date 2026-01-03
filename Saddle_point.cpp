#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}

int mn[n];
int mx[m];

for(int i=0;i<n;i++){
    mn[i]=2000;
    for(int j=0;j<m;j++){
        if(a[i][j]<mn[i]){
            mn[i]=a[i][j];

        }
    }
}


for(int j=0;j<m;j++){
    mx[j]=-2000;
    for(int i=0;i<n;i++){
        if(a[i][j]>mx[j]){
            mx[j]=a[i][j];
        }
    }
}


int cnt=0;
for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){
        if(a[i][j]==mn[i] && a[i][j]==mx[j]){
            cnt++;

        }
    }
}
cout<<cnt<<endl;
}
