#include<iostream>
#include"orientation_of_point.h"

using namespace std;

int main(){

    double x1,x2,x3,y1,y2,y3;
    cin>>x1>>x2>>x3>>y1>>y2>>y3;

    int orientation = ori(x1,y1,x2,y2,x3,y3);

    if (orientation == 1) cout<<"Left"<< endl;
    else if (orientation == 2) cout<<"Right"<< endl;
    else cout<< "Touch"<< endl;
    return 0;

}