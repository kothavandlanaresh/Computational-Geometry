#include<iostream>

using namespace std;

int main(){
    long x1,x2,x3,y1,y2,y3;
    cin>> x1>>x2>>x3>>y1>>y2>>y3;

    long val= (x3-x2)*(y2-y1)-(y3-y2)*(x2-x1);

    if(val<0) cout<<"Left"<<endl;
    else if(val>0) cout<<"Right"<<endl;
    else cout<<"Touch"<<endl;

}