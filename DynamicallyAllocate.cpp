#include <iostream>
#include <string>
using namespace std;
int main(){
    int *valInt = new int;
    string *pstr = new string;
    cout << "Enter an integer value: " ;
    cin >> *valInt;
    cin.ignore();
    cout << "Enter a string value:";
    getline(cin,*pstr);

    cout << " \n--- output---\n";
    cout << "The value of the dynamically allocated iteger is:" << *valInt << endl;
    cout << "The value of the dynamically allocated string is:" << *pstr << endl;

    return 0;

}