#include<bits/stdc++.h>
#define max 10
using namespace std;
int nhapmang(int a[max][max], int &n, int &m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}
int max_row(int a[max][max], int n, int m){
    for(int i=0;i<n;i++){
        int maxium=INT_MIN;
        int row=0;
        for(int j=0;j<m;j++){
            if(a[i][j]>maxium){
                maxium=a[i][j];
                row=j;
            }
        }
        int cnt=0;
        for (int k=0;k<n;k++){
            if(maxium < a[k][row]){
                cnt++;
            }
        }
        if(cnt==n-1){
            cout<<maxium;
        }
    }

}
int main(){
    int n,m; cin>>n>>m;
    int a[max][max];
    nhapmang(a,n,m);
    max_row(a,n,m);
}

// 3 4
// 1 2 3 4
// 4 2 5 6
// 2 7 4 5