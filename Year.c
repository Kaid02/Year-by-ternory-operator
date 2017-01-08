#include<stdio.h>
#include<conio.h>
	int main()
		{
			int year;
			
			printf("Enter the year : ");
			scanf("%d",&year);
			
			(year%400==0 || year%100!=0&& year%4==0)?
			printf("%d is leap year",year):printf("%d is not leap year");
			
			return 0;	
				
				}
			