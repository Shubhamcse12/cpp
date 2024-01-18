#include<iostream>
#include<vector>
#include<string>

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int x = 0;
        int n = operations.size();
        vector<int> st(n);
        int temp = 0;
        for(int i = 0 ; i < n ; i++){
            temp++;
            switch (operations[i])
            {
            case '+':
                

                break;
            case 'D':
                 x = x - 



                break;

            case 'c':





                break;
            default:
                st[temp-1]=operations[i];
                break;
            }
            
        }

        return x;
    }
};


int main(){




    return 0;
}