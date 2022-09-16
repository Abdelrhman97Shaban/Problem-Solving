#include <stdio.h> 


	

int main (void) 
{
	int No_Of_Problem; 
	int No_Of_Problem_To_Solve = 0;
	int Petya,Vasya,Tonya; 
	scanf ("%d",&No_Of_Problem); 
	while (No_Of_Problem--)
	{
		scanf("%d %d %d",&Petya,&Vasya,&Tonya); 
		if (Petya + Vasya + Tonya >= 2)
		{
			No_Of_Problem_To_Solve++; 
		}
	}
	
	printf("%d",No_Of_Problem_To_Solve); 
	return 0; 
}