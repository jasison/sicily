/*
 *Author:Monkey
 *Copyright (c) 2012 http://www.itlodge.net All rights reserved.
 */
 
#include <stdio.h>
#include <math.h>

#define PI acos(-1.0)        //Բ����

int main()
{
	int t;
	double x1,y1,d1,x2,y2,d2;     //�ҵ�һ����float,�����WA
	double x,y,k1,k2;
	int i;
	
	scanf("%d", &t);
	for(i = 0; i < t; i++){
		scanf("%lf %lf %lf", &x1,&y1,&d1);
		scanf("%lf %lf %lf", &x2,&y2,&d2);
		k1 = tan((90-d1)*PI/180);            //����б��
		k2 = tan((90-d2)*PI/180);
		x = (y2 - y1 + k1 * x1 - k2 * x2) / (k1 - k2);                 //�з��̽�����ı��ʽ
		y = (k1 * k2 * x2 - k1 * k2 * x1 + k2 * y1 - k1 * y2) / (k2 - k1);
		printf("%.4lf %.4lf\n", x,y);
	}
	
	return 0;
}