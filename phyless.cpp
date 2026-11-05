#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector <string> name = {"B123","C234","A345","C15","B177","G3003","C235","B176"};
  for(int i = 0;i<name.size();i++){
    if(name[i][0]=='B'){
    cout<<name[i]<<" ";
    }
  }
  return 0;

}