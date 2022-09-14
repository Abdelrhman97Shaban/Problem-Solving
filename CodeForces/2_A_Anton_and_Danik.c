#include <stdio.h>

#define MAX_SIZE 100000
int main (void) 
{
	int n;
	int Counter_A = 0; 
	int Counter_D = 0; 
	char arr[MAX_SIZE]; 
	
	scanf("%d",&n);
	scanf("%s",arr); 
	
	for (int i = 0; i < n; i++)
	{
		if (*(arr + i) == 'A') { Counter_A++;}
		if (*(arr + i) == 'D') { Counter_D++;}
	}
	
	if (Counter_A == Counter_D) {printf("Friendship");}
	if (Counter_A > Counter_D) {printf("Anton");}
	if (Counter_A < Counter_D) {printf("Danik");}
	
	return 0; 
}