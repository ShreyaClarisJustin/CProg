//Distance_to_kilometers
#include<stdio.h>
int main()
{
	int miles,yards;
	float kilometers;
	miles=26;
	yards=385;
	kilometers=(miles+(yards/1760))*1.609;
	printf("A marathon is %f kilometers",kilometers);
	//return 0;
}
