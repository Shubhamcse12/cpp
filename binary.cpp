#include<iostream>
using namespace std;
int main(){
    int  i,num,pos=-1,mid,beg=0,n,end;
    int a[100];
    cout<<"size of array : ";
    cin>> n ;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the "<< i << " element :: ";
        cin>>a[i];
    }

    cout<<"enter the element you want to search :: ";
    cin>>num;

     end = n-1;
    while (beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==num)
        {
            pos=mid;
            break;
        }
        else if(a[mid]<num)
        beg=mid+1;
        else
        end=mid-1;
    }
    if(pos==-1)
    cout<<"no. is not present";
    else
    cout<<num<<" is found at position "<< pos+1;
    return 0;
}