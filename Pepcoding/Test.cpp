#include<iostream>
#include"orientationOfPoint.h"

using namespace std;

int main(){

    double x1,x2,x3,y1,y2,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

    /*int orientation = ori(x1,y1,x2,y2,x3,y3);

    if (orientation == 1) cout<<"Left"<< endl;
    else if (orientation == 2) cout<<"Right"<< endl;
    else cout<< "Touch"<< endl;
    return 0;*/

    double o1 = ori(x1,y1,x2,y2,x3,y3);
    double o2 = ori(x1,y1,x2,y2,x4,y4);
    double o3 = ori(x3,y3,x4,y4,x1,y1);
    double o4 = ori(x3,y3,x4,y4,x2,y2);

    if(o1!=o2 && o3!=o4) cout<<"Yes"<<endl;
    else if(o1 == 0 && onSeg(x1,y1,x2,y2,x3,y3)) cout<<"Yes"<<endl;
    else if(o2 == 0 && onSeg(x1,y1,x2,y2,x4,y4)) cout<<"Yes"<<endl;
    else if(o3 == 0 && onSeg(x3,y3,x4,y4,x1,y1)) cout<<"Yes"<<endl;
    else if(o1 == 0 && onSeg(x3,y3,x4,y4,x2,y2)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;


}