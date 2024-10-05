#include <iostream>
#include<math.h>
using namespace std;
class Rectangle{
	protected:
		int length;
		int width;
	public:
		Rectangle(int,int);
		int area();
		void display();
};

Rectangle::Rectangle(int l,int w){
	if(l < 0 || w < 0){
		length=1;
		width=1;	
	}else{
		length=l;
		width=w;
	}
}
int Rectangle::area(){
	return (this->length*this->width);
}
void Rectangle::display(){
	cout<<"The rectangle has length is " << length << " and width is " << width << endl;
	cout<<"Area of the rectangle is " << area();
}

class Block :public Rectangle{
	private:
		int height;
	public:      
		Block(int,int,int);
        int area();
		void display();
};
Block::Block(int l,int w,int h):Rectangle(l,w){
//	length=l;
//	width=w;
	height=h;	
}
int Block::area(){
    return 2*(length*height+width*height+length*width);
}
void Block::display(){
    cout <<endl;
	cout<<"The block has length is " << length << ",width is " << width << ",height is " <<height <<endl;
    cout<<"Area of the block is "<<area()<<endl;
}
int main(){
	Rectangle chuNhat(10,20);
	Block Khoi(10,20,30);
	chuNhat.display();
	Khoi.display();
}
