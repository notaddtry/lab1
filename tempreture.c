#include <stdlib.h>
#include <stdio.h>

void convert(double temper, char type)
{
  if(type == 'C')
  {
    if(temper < -273.15){
      printf("Temperature is below absolute zero");
    } else 
    {
      double k = temper + 273.15;
      double f = (temper * 9 / 5) + 32;
      printf("%.2f C:\n", temper);
      printf("%.2f K\n", k);
      printf("%.2f F\n", f);
    }
  } 
  else if(type == 'F')
    {
    if(temper < -459.67)
    {
      printf("Temperature is below absolute zero");
    } else 
    {
      double c = (temper - 32) * 5 / 9;
      double k = (temper + 459.67) * 5 / 9;
      printf("%.2f F:\n", temper);
      printf("%.2f C\n", c);
      printf("%.2f K\n", k);
    }
  } 
  else if(type == 'K')
    {
    if(temper <= 0){
      printf("Temperature is below absolute zero");
    } else 
    {
      double c = temper - 273.15;
      double f = (temper / 5 * 9) - 459.67;
      printf("%.2f K:\n", temper);
      printf("%.2f C\n", c);
      printf("%.2f F\n", f);
    }
  } 
  else 
  {
    printf("Type  be K, F or C");
  }
}
int main(int argc, char *argv[])
{
  if (argc == 2)
  {
    double temper = atof(argv[1]);
    convert(temper,'C');
    printf("\n");
    convert(temper,'K');
    printf("\n");
    convert(temper,'F');
  }
    else if(argc == 3) 
    {
      double temper = atof(argv[1]);
      convert(temper,*argv[2]);
    }
    return 0;
}
