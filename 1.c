#include<stdio.h>

int max(int number_1, int number_2, int number_3, int number_4);

int main() {
	int a, b, c, d;
	
	printf("Please input four number,space \n");
	scanf_s("%d%d%d%d ",&a, &b, &c, &d);
		printf("The max number is %d \n", max(a, b, c, d));
		/*while (scanf_s("%d %d %d %d", &a, &b, &c, &d)!=EOF) {
		printf("max is %d\n", max(a,b,c,d));
		}*/

	}
int max(int number_1, int number_2, int number_3, int number_4)
{
	int max_1;
	int max_2;
	if (number_1 > number_2) {
		max_1 = number_1;
	}
	else {
		max_1 = number_2;
	}
	if (number_3 > number_4) {
		max_2 = number_3;
	}
	else {
		max_2 = number_4;
	}
	if (max_1 > max_2) {
		return  max_1;
	}
	else {
		return  max_2;
	}
}
