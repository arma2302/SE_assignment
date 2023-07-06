#include<stdio.h>

 int circle()
 {
 	//WAP to find area of circle, rectangle and triangle .
 	
 	//area of circle
 	
 	float pie,radius;
 	pie=3.14;
 	
 	printf("enter the value of r:");
 	scanf("%f",&radius);
 	

 	printf("Area of circle is : %f \n",pie*radius*radius);
 
}
 int rectangle()
 {

 	//area of rectangle
 	
 	float w,l;
 	
 	printf("enter width:");
 	scanf("%f",&w);
 	
 	printf("enter lenght:");
 	scanf("%f",&l);
 	
 
 	printf("area of rectangle is %f \n",w*l);

 }
 
 int triangle()
 {
 		
// 	//area of triangle
 	
 float height,base;
 	printf("enter height:");
 	scanf("%f",&height);
 	printf("enter base:");
 	scanf("%f",&base);
 	
 float at=(height*base)/2;
 	printf("area of triangle is %f",at);
 
 }


int main()


{  
int choice;
printf("select your choice \n" );
printf("1 circle \t 2 rectangle \t 3 triangle \n");
scanf("%d",&choice);

if(choice==1)
{
 
    printf("area of circle \n");
	circle();
}
	else if(choice==2)
	{
	printf("area of rectangle \n");
	rectangle();
	}
	else if (choice==3)
	{
	printf("area of triangle \n");
	triangle();
	}
}

