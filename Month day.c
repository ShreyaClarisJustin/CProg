#include <stdio.h>
int main()
{
	int d,m,y,count=0;
	puts("Enter today's date,month,year and day of the week");
	scanf("%d%d%d",&d,&m,&y);
	if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		count=31;
	}	
	if (m==2 && y%4==0)
	{
	     count=29;
	}
	     if (m==2 && y%100==0 && y%400==0)
	    {
		      count=29;
	    }
	      else;
	      {
	      	count=28;
		  }
		  
	
	
	if (m==4||m==6||m==9||m==11)
	{
		count=30;
	}
	printf("The max no of days in the entered month is %d",count);
}


