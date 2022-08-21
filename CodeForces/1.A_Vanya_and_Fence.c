#include <stdio.h> 


int main (void)
{
    int Number_Of_Frinds; 
    int Fence_Height;  
    int width = 0; 
    int Height_Of_Persons;
    
    scanf("%d %d",&Number_Of_Frinds, &Fence_Height); 
    

    for (int i = 0; i < Number_Of_Frinds; i++)
    {
        scanf("%d",&Height_Of_Persons); 
        if (Height_Of_Persons <= Fence_Height)
        {
            width = width + 1; 
        }
        else if (Height_Of_Persons > Fence_Height)
        {
            width = width + 2; 
        }
        
    }

    printf("%d\n",width); 
    

    return 0; 
}