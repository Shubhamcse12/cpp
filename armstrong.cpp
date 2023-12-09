#include<iostream>
#include<cmath>
using namespace std;
#include<math.h>
int main(){
    int num,temp,n=0,rem;
    float re=0.0;
    cout<<"num = ";
    cin>> num ;
    temp=num;
    for (temp=num; temp!=0; n++)
    {
        temp=temp/10;
    }
    for (temp=num; temp!=0; temp=temp/10)
    {
        rem=temp%10;
        re=re+pow(rem,n);
    }
    if(static_cast<int>(re)==num)  // Cast one of the operands to float for accurate division
    cout<<"armstrong";
    else
    cout<< " not armstrong" ;
    return 0;
    
}