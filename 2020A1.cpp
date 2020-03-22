#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
   // fstream file;
    fast;
    ll testcase ,test=1;
    cin>>testcase;
    while (testcase--)
    {
        ll n,b,count=0;
        ll sum=1e18;
        cin>>n>>b;
        int *arr;
        arr=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        
        for (int i = 0; i < n; i++)
        {
            if(sum<b && sum+arr[i]<=b)
            {
                sum+=arr[i];
                count++;
            }
            else
                break; 
        }
        
        cout<<"#"<<test<<" "<<count<<endl;
        test++;
    }
    return 0;
}