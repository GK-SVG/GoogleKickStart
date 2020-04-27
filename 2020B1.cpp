#include<bit/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);
#define endl "\n"
int32_t main()
{
    int t,test=1;
    cin>>t;
    while (t--)
    {
        int n,peak=0;
        cin>>n;
        int *arr;
        arr =new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(i!=0 && i!=n-1)
            {
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                peak++;
            }
        }
        cout<<"#"<<test<<":"<<" "<<peak<<endl;
        test++;
        delete[] arr;
    }
    return 0;
}