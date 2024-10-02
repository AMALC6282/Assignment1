#include <stdio.h>
#include <math.h>
int main() 
{
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    
    printf("Enter coefficients a, b, and c: "); //input from the user
    scanf("%lf %lf %lf", &a, &b, &c);

    
    discriminant = b * b - 4 * a * c; //calculate discriminant

    
    if (discriminant > 0) {  //checking the nature of discriminant
        
        root1 = (-b + sqrt(discriminant)) / (2 * a); //2 distinct real roots
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2lf\n", root2);
        printf("Root 2 = %.2lf\n", root1);
    } else if (discriminant == 0) {
        
        root1 = root2 = -b / (2 * a); //one real root
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        
        realPart = -b / (2 * a); //complex root
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}