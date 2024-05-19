#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space;
    for(int i=1;i<=n;i++){
        space=2*(n-i);
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        for(int j=1;j<=i;j++){
           cout<<j;
        }
        for(int j=0;j<space;j++){
           cout<<" ";
        }
        for(int j=i;j>=1;j--){
       cout<<j;
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
}