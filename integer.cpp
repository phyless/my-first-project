#include <iostream>
#include <limits>
using namespace std;
int main(){
    int value;
    while(true){
        cout <<"enter an integer value between 5 and 10 :";
        if(!(cin >> value)){
            cin.clear();
            cin.ignore( numeric_limits<streamsize>::max(),'\n');
            cout<<"sorry you have entered an invalid number, please try again "<<endl;
            continue;
        }
        if(value < 5 || value > 10){
            cout<<"you entered " << value << ". please enter a number between 5 and 10" << endl;
            continue;
    }
    cout << "your input value(" << value <<")has been accepted."<<endl;
    break;
    return 0;
}
}