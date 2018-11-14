#include "box.h"
#include <iostream>

int main(){
	Box* smallBox = new Box(2,2);
	std::cout<<"smallBox Area is: "<<smallBox->GetArea()<<std::endl;
	delete smallBox;
	return 0;
}