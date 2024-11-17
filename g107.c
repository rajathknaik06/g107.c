/*Benjamin is studying polar coordinates and wants to convert them to Cartesian coordinates. Develop a program that takes the radius (r) and angle (θ) in degrees as input, converts the angle to radians using inbuilt mathematical functions, and outputs the Cartesian coordinates (x, y).



Formula

radian = angle * pi / 180.0
x = radius * cos(radian) 
y = radius * sin(radian) 


Note: The pi value is calculated using M_PI constant from the math library.

Input format :
The first line consists of a double-value r, representing the radius.

The second line consists of a double-value a, representing the angle in degrees.

Output format :
The output prints two space-separated double values representing the Cartesian coordinates(x, y), both rounded to one decimal place.*/

#include <stdio.h>
#include <math.h>

int main() {
    double radius, angle;
    scanf("%lf", &radius);
    scanf("%lf", &angle);

    double radian_angle = angle * M_PI / 180.0;

    double x = radius * cos(radian_angle);
    double y = radius * sin(radian_angle);

    printf("%.1lf %.1lf", x, y);

    return 0;
}
