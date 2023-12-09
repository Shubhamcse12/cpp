#include<iostream>
using namespace std;

int main(){
    char alpha;
    cout<<"enter alphabet = ";
    cin>>alpha;

    if(alpha==65||alpha==69||alpha==73||alpha==79||alpha==85||alpha==97||alpha==101||alpha==105||alpha==112||alpha==117){
        cout<<alpha<< " is vowel ";
    }
    else
     cout<<alpha<< " is not a vowel";
    
    return 0;
}