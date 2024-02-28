#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
char t1[100001];
char t2[100001];
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    // cout<<"hello world"<<endl;
    // cout<<"你好111"<<endl;
      string s1,s2;
      cin>>s1>>s2;
      int n=s1.size();
        int j=0,k=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                t1[j++]=s1[i];
                t2[k++]=s2[i];
            }
            else{
              t1[j++]=s2[i];
              t2[k++]=s1[i];
            };
        }
         sort(t1,t1+j);
         sort(t2,t2+k);
//         cout<<t1<<endl;
//         cout<<t2<<endl;
       cout<<(strcmp(t1,t2)==0?"true":"false");
    return 0;
}