#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.of element in array";
    cin>>n;
    int a[n];
    cout<<"enter"<<n<<"elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int val1=INT_MIN,val2=INT_MIN;
    for (int i=0;i<n;i++)
    {
    if(a[i]>val1)
    {
        val2=val1;
        val1=a[i];
    }
    else if (a[i]>val2 && val2!=INT_MIN)
    {
        val2=a[i];
    }
    }
    if (val2==INT_MIN)
    {
        cout<<"elements are equal";
    }
    else
    {
        cout<<"2nd max element is"<<val2;
    }

    return 0;
}
