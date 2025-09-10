#include <stdio.h>

int main(){
     //int lenght = 7;
    // int breath = 7.5;
    // printf("The area of this rectangle is %d",lenght*breath);
   // float base = 4.5;
   // float height = 7.6;
   // printf("The area of traingle is %f", (1.0/2)*base*height);
    int length,breath;
    printf("Enter length\n");
    scanf("%d",&length);
     
    printf("Enter breath\n");
    scanf("%d",&breath);

    printf("The Area of rectangle is %d",length*breath);
    return 0;
    
}