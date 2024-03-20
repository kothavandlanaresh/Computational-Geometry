#include<iostream>
#include"orientationOfPoint.h"

using namespace std;

double ori(double x1, double y1, double x2, double y2, double x3, double y3){
    double val= (x3-x2)*(y2-y1)-(y3-y2)*(x2-x1);

    if(val<0) return 1;
    else if(val>0) return 2;
    return 0;
}

bool onSeg(double x1, double y1, double x2, double y2, double x3, double y3){
    return (x3<=max(x1,x2) && x3>=min(x1,x2) && y3<=max(y1,y2) && y3>=min(y1,y2));
}