#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);
    cout<<"First_Largest : "<<a[n-1]<<endl;
    cout<<"Second_Largest : "<<a[n-2]<<endl;
    cout<<"Third_Largest : "<<a[n-3];



    return 0;
}
