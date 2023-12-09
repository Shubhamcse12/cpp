#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout << "enter the no of term: ";
    cin >> n;

    int i = 1;

    cout<<"-------------------------->>> square pattern <<<-----------------------"<<endl;
        for(int i = 0 ; i < n ; i++ ){
            for (int j = 0; j < n; j++){
                cout<<"* ";
            }
            cout<<endl;
        }

        cout<<"-------------------------->>>upward left half triangle pattern <<<-----------------------"<<endl;

        for(int i = 0 ; i < n ; i++ ){
            for (int j = 0; j < i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }

        cout<<"-------------------------->>>downward left half triangle pattern <<<-----------------------"<<endl;

        for(int i = 0 ; i < n ; i++ ){
            for (int j = n; j > i; j--){
                  cout<<"* ";
            }
            cout<<endl;
        }

        cout<<"-------------------------->>>upward right half triangle pattern <<<-----------------------"<<endl;

        for(int i = 0 ; i < n ; i++ ){
            for (int j = 0; j < i; j++){
                 cout<<"* ";
            }
            cout<<endl;
        }


    return 0;
}
