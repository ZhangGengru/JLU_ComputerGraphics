#pragma once
#include<vector>

using namespace std;

struct Point
{
	Point(int x, int y) :x(x), y(y) {}
	Point() { x = 0, y = 0; }
	int x;
	int y;
};

class DrawMode
{
public:
	virtual void drag(CDC* pDC, Point oldPoint, Point newPoint, COLORREF color);
	virtual void draw(CDC* pDC, Point startPoint, Point endPoint, COLORREF color)=0;
	virtual void updata(CDC* pDC, Point point, COLORREF color);
	virtual bool isOver();//�ж��Ƿ����
	//��¼���������ʱ������
	vector<Point> points;
	
};

