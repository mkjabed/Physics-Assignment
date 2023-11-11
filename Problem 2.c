#include <stdio.h>
#include <math.h>
int main() {

    int m1 = 3; //The Order for the 1st case.
    printf("m1 = %d,\t",m1);

    double lambda1 = 530.0; //Value of Wavelength for the 1st case.
    printf("lambda1 = %.2lf nm,\t",lambda1);

    double theta1 = 65.0; //Distance of 3rd Order Bright Spot from the Central Maximum for Case 1.
    printf("theta1 = %.2lf degree\n\n",theta1);


    int m2 = 2; //The Order for the 2nd case.
      printf("m2 = %d,\t",m2);

    double lambda2 = 700.0;  //Value of Wavelength for the 2nd case.
      printf("lambda2 = %.2lf nm\n\n",lambda2);


    double d = (m1 * lambda1) / (sin(theta1 * M_PI / 180.0)); //Calculating the Distance between the slits using the formula, d sin(theta) = m * lambda
    printf("d = %.2lf nm\n\n",d);

    double theta2 = asin((m2 * lambda2) / d);  //Distance of 2nd Order Bright Spot from the Central Maximum for Case 2.
    theta2 = theta2 * 180.0 / M_PI;

    printf("The angle for the second-order bright spot for red light is = %.2lf degree\n", theta2);

    return 0;
}
