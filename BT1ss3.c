#include<stdio.h>
int main(){
	float r;
	const float PI = 3.14;
    printf("nhap ban kinh hinh tron:");
	scanf("%f",&r);
    float area = PI*r*r;
	float perimeter = 2*PI*r;
	printf("dien tich hinh tron : %.2f va chu vi chu vi hinh tron: %.2f", area,perimeter);
}

