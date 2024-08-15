#include <stdio.h>
#include <stdlib.h>

#define PIE 3.14

int main(){

       // initiliaze var 
       double radius;
       double area;

       // get input
       printf("Enter the radius of your circle: ");
       scanf("%lf", &radius);

       // compute
      
       area = PIE * radius * radius;

       // output
       printf("The area of your circle is %lf\n", area);

       return 0;


}
