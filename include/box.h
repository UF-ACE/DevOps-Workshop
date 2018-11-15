#ifndef BOX_H
#define BOX_H

class Box{
	public:
		Box(int x, int y);
		~Box();
		int GetArea();
		void SetX(int x);
		int GetX();
		int GetY();
		void SetY(int y);
	private:
		int x;
		int y;
};

#endif //BOX_H