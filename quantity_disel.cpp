#include<iostream>
using namespace std;
int main(){
    int average,kms;
    float disel_req;
    cout<<"enter the average"<<endl;
    cin>>average;
    cout<<"enter the kms"<<endl;
    cin>>kms;
    disel_req = kms/average;
    cout<<"disel req is: "<<disel_req<<endl;
    return 0;
}