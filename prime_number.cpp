#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for(int i=2; i<=n; i++){
        bool Isprime=true;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                Isprime=false;
                break;
            }
        }
        if(Isprime){
            cout<<i<<" ";
        }
    }
    return 0;
}