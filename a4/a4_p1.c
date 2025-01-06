/*
 CH-230-A
 a4_p1.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <math.h>

/*Creating a function that doesn't return a value (void). We have to
input the beginning value x (which acts as the lower limit), and then
the upper limit, and lastly the step size. All three variables should
floats. */
void print_table(float x, float upper_limit, float step_size){
    /*i will act as a helping variable for the loop. In the for
    loop i initially takes the value of x, and will continue
    increasing by the step size until it reaches the upper limit.*/
    float i;
    for(i = x; i <= upper_limit; i += step_size){
        /*Next we just compute the area and perimeter of the circle
        with radius i. We use i not x since i's value is the one
        changing. And then we print these values making sure to leave
        a space in between them. PS: The value of pi we get from the
        math library we included above. in line 9.*/

        printf("%f ", i);

        double circle_area;
        double pi = M_PI;
        circle_area = i * i * pi;
        printf("%lf ", circle_area);

        double circle_perim;
        circle_perim = 2 * i * pi;
        printf("%lf", circle_perim);

        printf("\n");
    }
}

int main(){
    /*Reading input from the user for lower and upper limits, and
    step size. Then we call the print_table function we created to
    finish the exercise.*/
    float x;
    scanf("%f", &x);

    float upper_limit;
    scanf("%f", &upper_limit);

    float step_size;
    scanf("%f", &step_size);

    print_table(x, upper_limit, step_size);

    return 0;
}