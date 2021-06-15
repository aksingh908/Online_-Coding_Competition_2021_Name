#include <bits/stdc++.h>
#define ll long long int 
#define nl '\n'
#define fst ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 



int main()
{
 

ll t;
cin>>t;
while(t--)
{
ll n,m;
cin>>n>>m;

int a[n];
for(int i=1; i<=n; i++ )
cin>>a[i];

int b[m];

for(int i=1; i<=m; i++)
cin>>b[i];

ll dis=0,train=0;
vector<int > v(m);

ll c=0;
ll d=0,r=0;

for(int i=1; i<=m; i++)
{
dis=b[i];
train=a[b[i]];

if(train>=1)
v.push_back(0);


else if(train==0)
{
    for(int  i=1; i<=train; i++)
      if(a[i]==1)
      c=i;

    for(int i=train;i<=n; i++)
       if(a[i]==2){
       d=i;
       break;}
       
 r=min(c,d);
 if(c!=0 || d!=0)
v.push_back(abs(r-dis));
else
v.push_back(-1);
}

}

for(auto x: v)
cout<<x<<" ";
cout<<nl;






}   

}