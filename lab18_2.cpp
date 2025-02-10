#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *Square1 , Rect *Square2){
    double x1max = Square1->x + Square1->w;
    double y1min = Square1->y - Square1->h;
    double x2max = Square2->x + Square2->w;
    double y2min = Square2->y - Square2->h;
    
    double overlap_areax = min(x1max, x2max) - max(Square1->x, Square2->x);
    double overlap_areay = min(Square1->y, Square2->y) - max(y1min, y2min);
    
    if (overlap_areax <= 0 || overlap_areay <= 0){
        return 0;
    }
    
    return overlap_areax * overlap_areay;
}