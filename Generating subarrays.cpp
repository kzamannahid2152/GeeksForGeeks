#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int a[n]; //taking input array
    for(int i=0; i<n;i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            //cout<<i<<" "<<j<<endl;

            //printing array Sub array elements
            for(int k=i; k<=j; k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;

}
