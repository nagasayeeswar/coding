/* Conversion of Centigrade to Farenheit using the formula
   F=(C*(9/5))+32 */
#include<stdio.h>

float get_farenheit(int celcius)
{
	return (celcius*1.8)+32;
}

void main()
{
 	int celcius;
	printf("Enter the Temperature c=");
	scanf("%d",&celcius);
	float farenheit=get_farenheit(celcius);
	printf("Temperature in Farenheit is f=%0.3f",farenheit);
	if (get_farenheit(42)==107.6f)
	{
		printf("\nCorrect");
	}
	else
	{	
	printf("\nError");
	}
	
	if (get_farenheit(40)==104.0f)
	{
		printf("\nCorrect");
	}
	else
	{	
	printf("\nError");
	}
	if (get_farenheit(38)==100.4f)
	{
		printf("\nCorrect");
	}
	else
	{	
	printf("\nError");
	}
	if (get_farenheit(36)==96.8f)
	{
		printf("\nCorrect");
	}
	else
	{	
	printf("\nError");
	}
	if (get_farenheit(35)==96.0f)
	{
		printf("\nCorrect");
	}
	else
	{	
	printf("\nError");
	}
}
