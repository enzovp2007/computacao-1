//mplemente uma função em C que receba os valores a, b e c passados por valor, e receba também dois valores x1 e
//x2 passados por referência. Em seguida, calcule e retorne as duas raízes da equação do segundo grau nas variáveis x1
//e x2. Protótipo:
//int calcula_raizes(float a, float b, float c, float *x1, float *x2);


#include <stdio.h> 
#include <math.h> 

int calcula_raizes(double a, double b, double c, double *x1, double *x2){
    double delta; 
    delta = ((b*b)-(4*a*c));
    if (delta < 0|| a == 0) { 
        return 0;
    }
     *x1= (-b+sqrt(delta))/2*a;
     *x2= ((-b-sqrt(delta))/2*a);
    return 1;
}

int main()
{ 
    double a,b,c, x1, x2;
    printf("Qual é o valor de a?");
    scanf("%lf", &a);
    printf("Qual é o valor de b?");
    scanf("%lf", &b);
    printf("Qual é o valor de c?");
    scanf("%lf", &c);


if (calcula_raizes(a,b,c,&x1,&x2)){
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
}
else 
{
    printf("Não existem duas raízes reais ");

}
return 0;
}
