#include<iostream>
using namespace std;
int main(){
    long car;
    cout<<"enter the 4 digit car number"<<endl;
    cin>>car;
    int sum=0;
    for(int i=0;i<sizeof(car);i++){
        sum = sum + car % 10;
        car = car/10;

    }
    cout<<"sum is: "<<sum<<endl;
    if(sum%3==0 && sum%5==0 && sum%7==0){
        cout<<"pass"<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }
    return 0;
}
