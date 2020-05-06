#include <iostream>

class Square{
private:
    int side;
    friend class Rectangle;
public:
    Square(int side):side(side) {}
    
};
class Rectangle{
private:
    int width{0};
    int height{0};
public:
    
    Rectangle(Square square):width(square.side), height(square.side) {}
    int Area() const {return width*height;}
};

int main() {
	Square squ(3);
	
	Rectangle rec(squ);

	// print out the results
	std::cout << "The rec has an area of : " << rec.Area() << std::endl;
}
