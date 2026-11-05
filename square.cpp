#include<iostream>
#include<limits>
using namespace std;
double squareArea(double side){
        return side * side;
}
double rectangleArea(double length,double width){
    return length * width;
}
double triangleArea(double base, double height){
    return 0.5 * base * height;
}
int main(){
    int choice;
    double side,length,width,height,base;
        cout << "please select the area of the shape to calculate" << endl;
        cout << "1. square"<< endl;
        cout << "2. rectangle"<< endl;
        cout << "3. triangle" << endl;
        cout << "4. quit program"<< endl;
        cout << "\nEnter selection:";
        cin >> choice;
        switch(choice){
            case 1:
            cout<< "enter the side of a square";
                cin >> side;
                cout << "Area of square = "<<squareArea(side) << endl;
                    break;
            case 2:
            cout << "enter the length of a rectangle";
                cin >> length;
                cout << "enter the width of a rectangle";
                cin >> width;
                cout << "Area of a rectangle = "<< rectangleArea(length,width)<< endl;
                break;
            case 3:
                cout << " enter the height of the triangle";
                cin >> height;
                cout << "enter the base of the triangle";
                cin >> base;
                cout << "Area of a  triangle = "<< triangleArea(base, height)<< endl;
                break;
                
            case 4:
                cout<< "program terminated.goodby"<<endl;
                break;

                default:
                cout<<"your input was: " << choice<< "which is an invalid input"<<endl;
                cout << "please enter a valid input!!!"<<endl;
        }
    
    while(choice !=4);
    return 0;
}