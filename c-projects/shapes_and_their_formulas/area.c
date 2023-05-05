
float area_circle(int r);
/* pie r square*/
float area_triangle(int b, int h);
/* half base x height*/
int area_square(int a);
/* a square */
int area_rectangle(int l, int w);
  /* length x width */
float area_hemisphere(int r);
 /* 3 PIE R SQUARED */
float area_sphere(int r);
/* 4 PIE R SQUARED */
float area_cone(int r, int l);
/* PIE R (R + L)*/
float area_cylinder(int r, int h);
 /* 2 PIE + ( RADIUS + HEIGHT)*/
 int area_rectangular_prism(int l, int w, int h);
 /* 2(WIDTH X LENGTH + HEIGHT X LENGTH + HEIGHT X WIDTH)*/
int area_cube(int a);
 /* 6 x a squared */
 float area_trampezium (int a, int b, int h);
 /* 1/2 x length of parallel side x height*/
int area_parallelogram(int b, int h);
 /* base x height */

#include<stdio.h>
int main(void){
   int l,r,b,h,w,choice;

printf("Choose a number you would like to calculate the area\n1.circle\n2.triangle\n3.square\n4.rectangle\n5.parallelogram\n6.trampezium\n7.cube\n8.rectangular prism\n9.cylinder\n10.cone\n11.sphere\n12.hemisphere\n");
scanf("%d",&choice);
if (choice == 1){
printf("input your radius\n");
scanf("%d",&r);
printf("The area of a circle with %d as radius is %f", r, area_circle(r));
}
else if (choice == 2){
printf("input your base\n");
scanf("%d",&b);
printf("input your height\n");
scanf("%d",&h);
printf("The area of a triangle with base %d and height %d is %f",b,h, area_triangle(b,h));
}
else if (choice == 3){
printf("input your length\n");
scanf("%d",&l);
printf("The area of a square with length %d is %d" ,l,area_square(l));
}
else if (choice == 4){
printf("input your length\n");
scanf("%d",&l);
printf("input your width\n");
scanf("%d",&w);
printf("The area of a rectangle with length %d and width %d is %d",l,w, area_rectangle(l,w));
}
else if (choice == 5){
printf("input your base\n");
scanf("%d",&b);
printf("input your height\n");
scanf("%d",&h);
printf("The area of a parallelogram with base %d and height %d is %d",b,h, area_parallelogram(b,h));
}
else if (choice == 6){
printf("input your length\n");
scanf("%d",&l);
printf("input your breadth\n");
scanf("%d",&b);
printf("input your height\n");
scanf("%d",&h);
printf("The area of a trampezium with length %d, breadth %d and height %d is %f",l,b,h, area_trampezium(l,b,h));
}
else if (choice == 7){
printf("input your length\n");
scanf("%d",&l);
printf("The area a cube with length %d is %d", l ,area_cube(l)); 
}
else if (choice == 8){
printf("input your length\n");
scanf("%d",&l);
printf("input your width\n");
scanf("%d",&w);
printf("input your height\n");
scanf("%d",&h);
printf("The area of a rectangular prism with length %d, width %d and height %d is %d",l,w,h, area_rectangular_prism(l,w,h));
}
else if (choice == 9){
printf("input your radius\n");
scanf("%d",&r);
printf("input your height\n");
scanf("%d",&h);
printf("The area of a cylinder with radius %d and height %d is %f",r,h, area_cylinder(r,h));
}
else if (choice == 10){
printf("input your radius\n");
scanf("%d",&r);
printf("input your length\n");
scanf("%d",&l);
printf("The area of a cone with radius %d and length %d is %f",r,l, area_cone(r,l));
}
else if (choice == 11){
printf("input your radius\n");
scanf("%d",&r);
printf("The area of a sphere with radius %d is %f",r, area_sphere(r));
}
else if (choice == 12){
printf("input your radius\n");
scanf("%d",&r);
printf("The area of an hemisphere with radius %d is %f",r, area_hemisphere(r));
}
else
printf("wrong input");
    return 0;
}

float area_circle(int r){
    /* pie r square*/
    float c = 3.142857142857 * (r * r);
    return(c);
}
float area_triangle(int b, int h){
    /* half base x height*/
    float t= 0.5 * (b * h);
    return (t);
}
int area_square(int a){
    /* a square */
    int s = a * a;
    return(s); 
}
int area_rectangle(int l, int w){
    /* length x width */
    int r = l * w;
    return(r);
}
int area_parallelogram(int b, int h){
    /* base x height */
    int p = b * h;
    return(p);
}
float area_trampezium (int a, int b, int h){
    /* 1/2 x length of parallel side x height*/
    float t = 0.5 * (a+b) * h; 
    return(t);
}
int area_cube(int a){
    /* 6 x a squared */
    int c = 6 * (a * a);
    return(c);
}
int area_rectangular_prism(int l, int w, int h){
    /* 2(WIDTH X LENGTH + HEIGHT X LENGTH + HEIGHT X WIDTH)*/
    int r= 2 * ((l * w) + (h * l) + (h * w));
    return(r);
}
float area_cylinder(int r, int h){
    /* 2 PIE + ( RADIUS + HEIGHT)*/
    float c = 2 * 3.142857142857 * (r + h);
    return(c); 
}
float area_cone(int r, int l){
    /* PIE R (R + L)*/
    float c = 3.142857142857 * ( r + l);
    return(c);
}
float area_sphere(int r){
    /* 4 PIE R SQUARED */
    float s = 4 * 3.142857142857 * (r * r);
    return (s);
}
float area_hemisphere(int r){
    /* 3 PIE R SQUARED */
    float h= 3 * 3.142857142857 * ( r * r);
    return(h);
}
