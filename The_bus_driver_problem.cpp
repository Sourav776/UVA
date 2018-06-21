#include<bits/stdc++.h>
using namespace std;
int par(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=(low - 1);

    for (int j=low;j <=high-1;j++)
    {
        if (arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
void quickSort(int arr[],int low,int high)
{
    if (low<high)
    {
        int pi=par(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main()
{
    int n,d,r;
    int mon[105];
    int eve[105];
    while(cin>>n>>d>>r && n && d && r)
    {
        //memset(mon,0,sizeof(mon));
        //memset(eve,0,sizeof(eve));
        for(int i=0;i<n;i++) cin>>mon[i];
        for(int j=0;j<n;j++) cin>>eve[j];
        quickSort(mon,0,n-1);
        quickSort(eve,0,n-1);
        //sort(mon,mon+n);
        //sort(eve,eve+n);
////        for(int i=0;i<n;i++) cout<<mon[i]<<" ";
////        cout<<endl;
////        for(int i=0;i<n;i++) cout<<eve[i]<<" ";
////        cout<<endl;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(mon[i]+eve[n-i-1]>d) sum+=(mon[i]+eve[n-i-1]-d)*r;
        }
        cout<<sum<<endl;
    }
    return 0;
}
