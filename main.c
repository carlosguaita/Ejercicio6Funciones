#include <stdio.h>
#include <math.h>

double calcularDistancia(double x1, double x2, double y1, double y2);
void imprimirPerimetro(double a, double b, double c);

int main (int argc, char *argv[]) {

    double p1x, p1y, p2x, p2y, p3x, p3y, a, b ,c;

    printf("Ingrese punto 1 X Y: ");
    scanf("%lf %lf",&p1x,&p1y);
    
    printf("Ingrese punto 2 X Y: ");
    scanf("%lf %lf",&p2x,&p2y);

    printf("Ingrese punto 3 X Y: ");
    scanf("%lf %lf",&p3x,&p3y);

    a=calcularDistancia(p1x,p2x,p1y,p2y);
    b=calcularDistancia(p1x,p3x,p1y,p3y);
    c=calcularDistancia(p3x,p2x,p3y,p2y);

    imprimirPerimetro(a,b,c);

    return 0;
}

double calcularDistancia(double x1, double x2, double y1, double y2){
    double distancia;
    distancia = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return distancia;
}

void imprimirPerimetro(double a, double b, double c){
    double p = a+b+c;
    printf("El perimetro es: %lf",p);
}