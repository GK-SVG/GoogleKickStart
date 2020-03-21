#include<bits/stdc++.h>
using namespace std;
fstream file;
int test=1;
int hours()
{
    int n,p,count=0,sum=0,min,count2=0;
    file>>n>>p;
        int arr[n];
      //  arr= new int[n];
        for (int i = 0; i < n; i++)
        {
            file>>arr[i];
        }
        sort(arr,arr+n);
     for (int i = n-1; i>=0; i--)
        {
            count=1;
            sum=0;
            for (int j = i-1;j>=0; j--)
            {
                if(count<p)
               { 
                 count++;
                 sum+=(arr[i]-arr[j]);
               }
               else
               {
                 break;
               }
            }
            if(count2==0)
            {
                min=sum;
                count2++;
            }
            if(sum<min && p==count)
            min=sum;
        }
       //delete[] arr;
       cout<<"#"<<test<<" ";
        return min;
}
int main()
{
    int t;
    file>>t;
    while (t--)
    {
        cout<<hours()<<endl;
        test++;
       
    }
    
}