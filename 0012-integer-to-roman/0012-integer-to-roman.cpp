#include<bits/stdc++.h>
using namespace std;
using namespace std;
#define zhalok Zhalok
#define inf 1000000
#define ll long long int  
#define ull unsigned long long 
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define negloop(i,a,b) for(ll i=a;i>=b;i--)
#define vi vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define pb push_back
#define be begin()
#define en end()
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define ff first
#define ss second
#define MOD 1000000007
#define sz 10001
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(),v.end()
#define eps 1e-8
#define pi acos(-1.0)



class Solution {
    
public:
   
   

    vi v;
    map<int,char>mp;

    string convert(int n)
    {

      string ans;

      for(int i=0;i<v.size();i++)
      if(v[i]==n)
      {
        ans+=mp[v[i]];
        return ans;
      }

      for(int i=0;i<v.size();i++)
      for(int j=i+1;j<v.size();j++)
      if(v[j]-v[i]==n){
      
      ans+=mp[v[i]];
      ans+=mp[v[j]];
      
      return ans;
      }

      int num = n;
      while(num)
      {
        for(int i=v.size()-1;i>=0;i--)
        if(v[i]<=num)
        {
          num-=v[i];
          ans+=mp[v[i]];
          break;
        }
        
      }

      return ans;

    }

    vi get_the_vector(int n)
    {
      int fact=1;
      vi v;
      while(n)
      {
        int temp=n%10;
        v.push_back(temp*fact);
        n/=10;
        fact*=10;
      }
      reverse(all(v));
      return v;

    }

    string intToRoman(int num) {
        
        mp[1]='I';
        mp[5]='V';
        mp[10]='X';
        mp[50]='L';
        mp[100]='C';
        mp[500]='D';
        mp[1000]='M';
       
        v.push_back(1);
        v.push_back(5);
        v.push_back(10);
        v.push_back(50);
        v.push_back(100);
        v.push_back(500);
        v.push_back(1000);

        vi vv=get_the_vector(num);
        for(auto x:vv) cout<<x<<" ";
        cout<<endl;

        string ans;
        for(int i=0;i<vv.size();i++)
        ans+=convert(vv[i]);

        return ans;

        

       
    }

     
      
  
};

// int main()
// {
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     Solution solution;
//     int n;
//     cin>>n;
//     cout<<solution.intToRoman(n)<<endl;


    
    

// }