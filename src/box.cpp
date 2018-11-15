#include "box.h"

Box::Box(int x, int y){
	this->x = x;
	this->y = y;
}

Box::~Box(){
	
}

int Box::GetArea(){
	return x*y;
}

void Box::SetX(int x){
	this->x = x;
}

int Box::GetX(){
	return x;
}

int Box::GetY(){
	return y;
}

void Box::SetY(int y){
	this->y = y;
}