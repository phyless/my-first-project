#include <iostream>

#include<random>
using namespace std;
int main(){
random_device rd;
mt19937 gen (rd ());
uniform_int_distribution<int> dist(0, 11);
int a = dist(gen);
cout<<a<<endl;
if(a==0)
    cout<<"has expired"<<endl;
     else if(a==1){
    cout<<"expired within a day"<<endl;
    cout<<"renew now and save 20%"<<endl;
     }
    else if(a<=5)
    cout<<" subriscription has expired"<<endl;
    else if(a<=10){
    cout<<"active subscription"<<endl;
    cout<<"renew and save 10%"<<endl;
    }
    

    return 0;
}