#include<bits/stdc++.h>
using namespace std;

int find_Peack(int a[], int n){

    if(n == 1){
        return 0;
    }
    if(a[0] >= a[1]){
        return 0;
    }
    if(a[n-1] >= a[n-2]){
        return n-1;
    }

    for(int i=1; i<=n; i++){
        if(a[i] >= a[i-1] && a[i] >= a[i+1]){
            return i;
        }
    }
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }

    cout<<find_Peack(a, n);

    return 0;
}
