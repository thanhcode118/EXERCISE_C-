#include <bits/stdc++.h>
using namespace std;
bool bineary_search(int a[], int n, int x){
    for (int i=0;i<n;i++){
      if(a[i]==x) return true;
    }
    return false;
}
void delete_post(int a[], int n, int x){
    bineary_search(a,n,x);
    for (int j=0;j<n;j++){
      if (a[j]>x) cout<<a[j];
    }
}
int main(){
  int n,x; cin>>n>>x;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  if (bineary_search(a,n,x)==true){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO";
  }
  bineary_search(a,n,x);
  for(int i=0;i<n;i++){
    if(a[i]==x) {
      cout<<i<<" "<<endl;
  }
}
  delete_post(a,n,x);
}
