// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         cout<<i<<" ";
//         sum+=i;
//     }
//     cout<<endl;
//     cout<<"Sum is: "<<sum<<endl;
//     return 0;
// }



// sum by number wise
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum=0;
    for(int i=0; i<=n; i++){
        cout<<"The sum of "<<i<<" : "<<"= ";
        sum+=i;
        cout<<sum<<endl;
    }
    return 0;
}