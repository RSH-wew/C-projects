#include <stdio.h>
#include <math.h>

int radius, length, breadth, side, num;
float pi = 3.14;
void square_of_a_number(int num){
    printf("enter a num -> ");
    scanf("%d", &num);
    int square_of_a_number = pow(num,2);
    printf("square of this number is : %d\n", square_of_a_number);
}
void area_of_circle(float radius){
    printf("enter the radius -> ");
    scanf("%f", &radius);
    float area = pi*radius*radius;
    printf("area of circle is %.2f\n", area);
}
void area_of_square(float side){
    printf("enter the side -> ");
    scanf("%f", &side);
    float area = side*side;
    printf("area of square is %.2f\n", area);
}
void area_of_rectangle(float length, float breadth){
    printf("enter the length and the breadth -> ");
    scanf("%f %f", &length, &breadth);
    float area = length*breadth;
    printf("area of rectangle is %.2f\n", area);
}

int main () {
    int ch;
    printf("choose the shape for which area needs to be calculated:\n");
    printf("1.circle \n2.square \n3.rectangle \n4.square of num \n-> ");
    scanf("%d", &ch);
    
    switch (ch){
    case 1:
        area_of_circle(radius);
        break;
    case 2:
        area_of_square(side);
        break;
    case 3:
        area_of_rectangle(length,breadth);
        break;
    case 4:
        square_of_a_number(num);
        break;
    }

}




