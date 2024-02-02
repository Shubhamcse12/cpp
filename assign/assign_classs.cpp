#include<iostream>
using namespace std;
class members{
    private:
    int employees_number;
    float employeescompensation;
    public:
    void setemployees_date(int x, int y){
        employees_number = x;
        employeescompensation = y;
    }
    int getemployees_number(){
        return employees_number;
    }
    int getemployeescompensation(){
        return employeescompensation;
    }
};

int main(){
members m1;
m1.setemployees_date(2,269856);

cout<<m1.getemployees_number();

cout<<m1.getemployeescompensation();

return 0;
}