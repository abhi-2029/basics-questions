#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float fahrenheit=26;
    float celsius;
    celsius=(fahrenheit-32)*5/9;
    cout<<fixed<<setprecision(2);
    cout<<"Celsius is: "<<celsius<<endl;
    return 0;
}