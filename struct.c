#include <stdio.h>
int main()
{
 	struct s {
		int num1;
		int num2;
		} struct1;
	
	struct1.num1=10;
	struct1.num2=20;
        printf("struct1.num1=%d,\nstruct1.num2=%d",struct1.num1, struct1.num2);
	
 	struct s *struct2;
	struct2=&struct1;
        printf("struct2->num1=%d,\nstruct2->num2=%d",struct2->num1, struct2->num2);

	struct{
		int sum,difference,product,division;
		} result1;
result1.sum=struct2->num1+struct2->num2;
result1.difference=struct2->num1-struct2->num2;
result1.product=struct2->num1 * struct2->num2;
result1.division=struct2->num1 / struct2->num2;

printf("\nSum=%d,\nDifference=%d,\nProduct=%d,\nDivision=%d",result1.sum ,result1.difference, result1.product, result1.division);

return 0;



}
