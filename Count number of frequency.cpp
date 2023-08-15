#include<bits/stdc++.h>
using namespace std;

int countOccurrences(int a[], int n, int x){

    int count=0;
    for(int i=0; i<n; i++){
        if(x==a[i])
            count++;
    }
    return count;
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int x ; cin >> x;
    cout<<x<<" Occurrence "<<countOccurrences(a,n,x)<<" times"<<endl;

    return 0;
}
