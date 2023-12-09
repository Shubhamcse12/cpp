#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter the number for which you want to erite a table :";
    cin>> n ;
    cout<<"your table of "<<n << "is :"<<endl;
    for (int i = 1; i <= 10 ; i++)
    {
        cout<<n<<" * "<<i<<" = "<< n*i <<endl;
    }
    
    
    return 0;
}