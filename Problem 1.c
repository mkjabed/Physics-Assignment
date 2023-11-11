#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    // Input variables
    int m;        // order of diffraction
    double angle; // angle in degrees
    char type;     // 'M' for maxima, 'm' for minima

    double d;     // distance to the screen in micrometers

    // Prompt user for input
    printf("Enter the order of diffraction (m): ");
    scanf("%d", &m);

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    // Prompt user to choose maxima or minima
    printf("Choose type ('M' for maxima, 'm' for minima): ");
    scanf(" %c", &type);

    printf("Enter the distance between the slits in micrometers: ");
    scanf("%lf", &d);

    d = d/1000;

    // Convert angle to radians
    double theta = angle * PI / 180.0;

    // Wavelength calculation
    double wavelength;
    if (type == 'M') {
        wavelength = (sin(theta) * d) / m;
    } else if (type == 'm') {
        wavelength = (sin(theta) * d) / (m + 0.5) ;
    } else {
        printf("Invalid type. Use 'M' for maxima or 'm' for minima.\n");
        return 1;  // Exit with an error code
    }

    // Output the numeric value of the wavelength
    printf("\nNumeric value of the wavelength: %.2lf nm\n", wavelength * 1e9);

    // Determine the color of the light based on the wavelength range
    if (wavelength >= 380 && wavelength < 450) {
        printf("Color of the light: Violet\n");
    } else if (wavelength >= 450 && wavelength < 485) {
        printf("Color of the light: Blue\n");
    } else if (wavelength >= 485 && wavelength < 500) {
        printf("Color of the light: Cyan\n");
    } else if (wavelength >= 500 && wavelength < 565) {
        printf("Color of the light: Green\n");
    } else if (wavelength >= 565 && wavelength < 590) {
        printf("Color of the light: Yellow\n");
    } else if (wavelength >= 590 && wavelength < 625) {
        printf("Color of the light: Orange\n");
    } else if (wavelength >= 625 && wavelength <= 750) {
        printf("Color of the light: Red\n");
    } else {
        printf("Wavelength is outside the visible light range.\n");
    }

    return 0;
}
