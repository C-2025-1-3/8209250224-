#include"mytriangle.h"
#include<cmath>
//判断三角形合法性：任意两边之和大于第三边
bool is_valid(double side1, double side2, double side3) {
	return(side1 > 0 && side2 > 0 && side3 > 0) && (side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2);
}
//海伦公式计算面积
double area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}