#include<bits/stdc++.h>
#define max 100
using namespace std;
int nhapmang(int a[max][max], int &n, int &m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}
int biendoi(int a[max][max], int b[], int m , int n, int &k){
    k=0;
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[k]=a[i][j];
            k++;
        }
    }
}
int sapxep(int b[], int k){
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(b[i]>b[j]){
                swap(b[i],b[j]);
            }
        }
    }
}
int xoayoc( int b[], int a[max][max], int m, int n){
    int k=0;
    int h1=0, h2=n-1, c1=0, c2=m-1;
    while(h1<=h2 && c1<=c2){
        for( int i=c1;i<=c2;i++){
            a[h1][i]=b[k];
            k++;
        }
        h1++;
        for( int i=h1;i<=h2;i++){
            a[i][c2]=b[k];
            k++;
        }
        --c2;
        if(c1<=c2){
        for (int i=c2;i>=c1;i--){
            a[h2][i]=b[k];
            k++;
        }
        h2--;
        }
        if(h1<=h2){
        for(int i=h2;i>=h1;i--){
            a[i][c1]=b[k];
            k++;
        }
        c1++;
        }
    }
}
int xuatmang(int a[max][max], int m, int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int n,m,k; cin>>n>>m;
    int a[max][max];
    nhapmang(a,n,m);
    int b[max];
    biendoi(a,b,m,n,k);
    sapxep(b,k);
    xoayoc(b,a,m,n);
    xuatmang(a, m, n);
}