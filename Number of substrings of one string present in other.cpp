#include<bits/stdc++.h>
using namespace std;

int substring_return(string str1, string str2){

    int ans=0;

    for(int i=0; i<str1.length(); i++){
        string str3;
        for(int j=i; j<str1.length(); j++){
            str3 +=str1[j];

            if(str2.find(str3) != string::npos){
                ans++;
            }
        }
    }

    return ans;
}

int main()
{
    string str1, str2;
    cin>>str1>>str2;

    cout<<substring_return(str1, str2);
    return 0;
}
