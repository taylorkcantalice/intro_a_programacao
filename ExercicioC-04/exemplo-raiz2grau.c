#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float delta, x1, x2;
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    
    delta = b*b - 4*a*c;
    
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    printf("x1 = %.1f\nx2 = %.1f\n", x1, x2);
    
    return 0;
}
