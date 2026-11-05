#include <iostream>
#include<random>
using namespace std;
int main(){
random_device rd;
mt19937 gen (rd ());
uniform_int_distribution<int> dist(0, 11);
int a = dist(gen);
cout<<a<<endl;
switch(a){
    case 0:
    cout<<"has expired"<<endl;
    break;
     case1:
    cout<<"expired within a day"<<endl;
    cout<<"renew now and save 20%"<<endl;
    break;
    case2:
    case 3:
    case 4:
    case 5:
    cout<<" subriscription has expired"<<endl;

    cout<<"expired within a day"<<endl;
    cout<<"renew now and save 20%"<<endl;
    
    default:
    cout<<"active subscription"<<endl;
    cout<<"renew and save 10%"<<endl;
}
    return 0;
                

}