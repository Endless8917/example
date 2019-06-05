#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a,sum=0;

    for(int t=0;t<5;t++){
        cin>>a;
        sum=sum+a;
    }
    cout<<fixed<<setprecision(2)<<sum/5.0<<endl;
}
