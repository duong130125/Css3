#include<stdio.h>
int main(){
	float lenght, height;
	printf("nhap chieu dai vaf chieu rong chu nhat:");
	scanf("%f %f",&lenght,&height);
	float area = lenght*height;
	float perimeter = (lenght*height)*2;
	printf("hinh chu nhat cos dien tich: %.1f va chu vi: %.1f", area,perimeter);
}
