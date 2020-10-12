#include<bits/stdc++.h>
using namespace std;

int main()
{
int n=6;
int arr[n]={5,10,19,6,3,8};
int count=1;
int maximum=1;
for(int i=1;i<n;i++)
{
if((arr[i]%2==0 && arr[i-1]%2!=0) ||(arr[i]%2!=0 && arr[i-1]%2==0))
{
    count++;
    maximum=max(maximum,count);
}
else
{
    count=1;
}
}
cout<<maximum;
}