/* Conversion of Centigrade to Farenheit using the formula
   F=(C*(9/5))+32 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test (int celcius, float expected_farenheit);

float
get_farenheit (int celcius)
{
  return (celcius * 1.8) + 32;
}

int
main (int argc, char *argv[])
{
  printf ("argc=%d\n", argc);
  int i;
  for (i = 0; i < argc; i++)
    {
      printf ("argv[%d]=%s\n", i, argv[i]);
    }
  if (argc > 1)
    {
      if (strcmp (argv[1], "test") == 0)
	{
	  test (42, 107.6f);	/*correct */
	  test (40, 104.0f);	/*correct */
	  test (38, 100.4f);	/*correct */
	  test (36, 96.8f);	/*correct */
	  test (34, 93.2f);	/*correct */
	  test (32, 90.6f);	/*wrong */
	  test (30, 88.0f);	/*wrong */
	}
      else
	{
	  int celcius = atoi (argv[1]);
	  printf ("farenheit=%0.2f\n", get_farenheit (celcius));

	}
    }
  else
    {
      int celcius;
      printf ("Enter the Temperature c=");
      scanf ("%d", &celcius);
      float farenheit = get_farenheit (celcius);
      printf ("Temperature in Farenheit is f=%0.3f", farenheit);
    }
}

void
test (int celcius, float expected_farenheit)
{
float actual_farenheit= get_farenheit (celcius); 
  if (actual_farenheit== expected_farenheit)
    {
      printf ("\nGiven Celcius=%d,\nExpected Farenheit=%0.2f,\nActual Farenheit=%f\n Correct", celcius,expected_farenheit, actual_farenheit );
    }
  else
    {
      printf ("\nGiven Celcius=%d,\nExpected Farenheit=%0.2f,\nActual Farenheit=%f\n error", celcius,expected_farenheit, actual_farenheit );
    }
}
