// Count Sort //



#include<iostream>
using namespace std;
int main()
{
    int a[]={2,34,5,2,2,345,6,78,45,231,1,3,45,6};
    int n=sizeof(a)/sizeof(a[0]);
    int mx=0;
    for(int i=0;i<n;i++)
    {
        if(mx<a[i])
        {
            mx=a[i];
        }
    }
    int *c;
    c= new int[mx+1];
    for(int i=0;i<mx+1;i++)
    {
        c[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    int i=0,j=0;
    while(i<mx+1)
    {
        if(c[i]>0)
        {
            a[j++]=i;
            c[i]--;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
