#include "Matrix_Calculations.h"
#include "stdio.h"
#include "stdint.h"
#define Rows  3
#define Cols  3

double array[3][4] =
{
	{1,2,6.5},
	{3,4,0  },
	{0,8,3.6}
};
int main()
{
	uint16_t i = 0;
    uint16_t j = 0;
	matrix* d;
	matrix* d1;
	matrix* d2;
	d  = Mnew(Rows, Cols);
	d1 = Mnew(Rows, Cols);
	d2 = Mnew(Rows, Cols);

	// 将二维数组的值赋给双重指针
	for (i = 0; i < Rows; i++) {
		for (j = 0; j < Cols; j++) {
			d->A[i][j] = array[i][j];
		}
	}
	for (i = 0; i < Rows; i++) {
		for (j = 0; j < Cols; j++) {
			d1->A[i][j] = array[i][j];
		}
	}
	Minit(d);
	Minit(d1);
	printf("输入的矩阵为：\n");
	Mprintf(d);
	printf("矩阵逆为：\n");
	Mprintf(d->inv);
	printf("矩阵转置为：\n");
	Mprintf(d->T);
	printf("矩阵的和为：\n");
	d2=Mplus(d, d1);
	Mprintf(d2);

	Mfree(d);
	Mfree(d1);
	Mfree(d2);
	return 0;
}
