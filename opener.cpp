#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
int main(){
    string fileData;
    ofstream myOutObj("merlitech.txt");
    myOutObj<<"This is the advanced Computer Programming Module";
    myOutObj.close();
    ifstream myInObj("merlitech.txt");
    getline(myInObj,fileData);
    myInObj.close();
    cout<<fileData<<endl;

int count = 0;
for(int i = 0; i < fileData.size(); i++){
    if(fileData[i] == 'a' || fileData[i] == 'e' || fileData[i] == 'i' || fileData[i] == 'o'  || fileData[i] == 'u' || 
        fileData[i]== 'A' || fileData[i] == 'E' || fileData[i] == 'I' || fileData[i] == 'O' || fileData[i] == 'U'){ 
        count++;
    }
}    
cout<<"number of vowels:"<<count <<endl;
stringstream ss(fileData);
string word;
int words = 0;
while(ss >> word){
    words++;
}
    cout<<"number of words = "<< words <<endl;

string arr[100];
int n = 0;
stringstream ss2(fileData);
string w;
while(ss2 >> w){
    arr[n] = w;
    n++;
}
cout<< "reversed words:";
for(int i = n-1; i>=0; i--){
    cout<< arr[i]<< " ";
    
}
cout<<endl;
cout<<"second letter capitalized:";
    for(int i = 0; i<n; i++){
        if(arr[i].length() >= 2){
            if(arr[i][1] >= 'a' && arr[i][1] <= 'z'){
                arr[i][1] = arr[i][1] - 32;
            }
        }
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

    

