#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    // if(n>0){
    //     cout<< "A is positive" <<endl;
    // }else{
    //     cout<<"A is neagative"<<endl;
    // }
    int i = 2;
    while(i<n){
     if(n%i==0){
        cout<<"is not a prime number"<<endl;
     }else{
        cout << "is prime " <<endl;
     }
     i++;
    }

}