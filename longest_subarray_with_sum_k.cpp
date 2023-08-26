#include<bits/stdc++.h>
#include<iostream>
#define ll long long
#define loop(i,a) for(int i=0;i<a;i++)
#define mod 1000000007
#define god 998244353
using namespace std;
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
 ll n;
 cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int sum=0,maxi=INT_MIN;

for(auto it:v){
   sum+=it;
   maxi = max(maxi,sum);

   if(sum<0){
    sum=0;
   }

}
cout<<maxi<<endl;
return 0;
}