#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter the number of natural number :";
    cin>> n ;

    while (n>0)
    {
       sum=sum+n;
       n--; 
    }
    cout<<"sum of n natural number is : "<< sum;
    return 0;
}