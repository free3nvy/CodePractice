#include<bits/stdc++.h>
using namespace std;
int s[500021],j[500021],n;
int cmp(int a,int b) {
    return a>b;
}
int main() {
    while(cin>>n&&n!=0) {
        for(int i=0; i<n; i++) {
            cin>>s[i];
            j[i]=s[i];
        }
        sort(s,s+n);
        for(int i=1; i<n; i++) {
            s[i]=s[i]*s[i-1]+1;
            sort(s+i,s+n);
        }
        int max=s[n-1];
        sort(j,j+n,cmp);
        for(int i=1; i<n; i++) j[i]=j[i-1]*j[i]+1;
        int min=j[n-1];
        cout<<max-min<<endl;
    }
    return 0;
	cout << "hello";
}