#include<iostream>

int main(){
    bool x = (true && (4/3 || !(6)));
    std::cout<<x;
    return 0;
}