#include<iostream>
using namespace std;

int typecast (float n){
    return (int)n;
}

int typecast (double n){
    return (int)n;
}

float typecast (int n){
    return (float)n;
}

int typecast (float n){
    return (double)n;
}

double typecast_1 (float n){
    return (double)n;
}

float typecast_2 (double n){
    return (float)n;
}



int main(){
    int n;
    float n;
    double n;
    int choice;
    while (1)
    {
        cout<<"choose:"<<endl;
        cout<<"1. convert int into float"<<endl;
        cout<<"2. convert int into double"<<endl;
        cout<<"3. convert float into int"<<endl;
        cout<<"4. convert float into double"<<endl;
        cout<<"5. convert double into float"<<endl;
        cout<<"6. convert double into int"<<endl;
        cout<<"choose:"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            typecast(n);
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        
        default:
        cout<<"choose correct option";
            break;
        }

    }
    

    return 0;
}
