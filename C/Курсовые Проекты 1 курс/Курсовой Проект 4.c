#include <stdio.h> 
#include <math.h>
struct result {
    double root;     
    int iters;
}; 
double f15(double x) {
    return 0.4+atan(sqrt(x))-x; 
}
double f15_f(double x) {
    return 0.4+atan(sqrt(x)); 
} 
double f16(double x) {
    return 3*sin(sqrt(x))+0.35*x -3.8; 
}
double f16_f(double x) {
    return -(3*sin(sqrt(x)) -3.8)/0.35; 
}
double df(double (*f)(double), double x) {     
    double dx = pow(2, -26); 
    return (f(x + dx) - f(x - dx)) / (2 * dx); 
}   
double ddx(double (*f)(double), double x) {     
    double dx = pow(2, -13);
    return (f(x + dx) - 2 * f(x) + f(x - dx)) / (dx * dx);  
}        
struct result diho(double (*f)(double), double a, double b) {     
    struct result res;     
    double delta = pow(2, -26);     
    res.iters = 0;  
    if (f(a)*f(b) <0){
    while (b - a > delta) {         
        double c = (a + b) / 2;         
        if (f(a) * f(c) < 0) {             
            b = c;         
        } 
        else {           
            a = c;         
        }         
        res.iters++; 
    }     
    res.root = (a + b) / 2;         
    return res; 
    }
    else{
        res.iters=-1;
        return res;
    }
} 
struct result iter(double (*f)(double), double a, double b) {     
    struct result res; 
    double delta = pow(2, -26);     
    double k0 = (a + b) / 2;     
    double k1 = k0;     
    res.iters = 0;     
    do {         
        if (fabs(df(f, k0)) >= 1) {             
            res.iters = -1;             
            return res; 
        }         
        k0 = k1;         
        k1 = f(k0);        
        res.iters++; 
    } while (fabs(k1 - k0) > delta );     
    res.root = k1;        
    return res; 
} 
struct result nwtn(double (*f)(double), double a, double b) {    
     struct result res;    
     double k0 = (a + b) / 2;     
     double delta = pow(2, -26);    
      double k1 = k0;     
      res.iters = 0;     
      do {         
          if (fabs(f(k0) * ddx(f, k0)) >= pow(df(f, k0), 2)) {             
              res.iters = -1;             
              return res; 
        }         
        k0= k1;        
        k1 = k0 - f(k0) / df(f, k0);       
        res.iters++; 
    } while (fabs(k1 - k0) > delta);     
    res.root = k1;       
    return res; 
} 
int main() { 
    struct result diho_1 = diho(f15,1,2);  
    if(diho_1.iters!=-1){ 
    printf("Дихотомия,  корень: %.4lf, количество итераций: %3d\n", diho_1.root,diho_1.iters );}
    else{
         printf("Дихотомия не применим\n");
    }
    struct result iter_1 = iter(f15_f, 1,2);        
    if(iter_1.iters!=-1){ 
        printf("Итерации,  корень: %.4lf, количество итераций: %3d\n", iter_1.root, iter_1.iters); 
    }     
    else{ 
    printf("Итерации не применим\n"); 
    } 
    struct result nwtn_1 = nwtn(f15, 1,2);
    if(nwtn_1.iters!=-1){ 
        printf("Ньютон, корень: %.4lf, количество итераций: %3d\n", nwtn_1.root, nwtn_1.iters); 
    }
    else{ 
        printf("Ньютон не применим\n"); 
    }
    printf("\n");
struct result diho_2 = diho(f16,2,3);  
    if(diho_2.iters!=-1){ 
    printf("Дихотомия,  корень: %.4lf, количество итераций: %3d\n", diho_2.root,diho_2.iters );}
    else{
         printf("Дихотомия не применим\n");
    }
    struct result iter_2 = iter(f16_f, 2,3);        
    if(iter_2.iters!=-1){ 
        printf("Итерации,  корень: %.4lf, количество итераций: %3d\n", iter_2.root, iter_2.iters); 
    }     
    else{ 
    printf("Итерации не применим\n"); 
    } 
    struct result nwtn_2 = nwtn(f16, 2,3);
    if(nwtn_2.iters!=-1){ 
        printf("Ньютон, корень: %.4lf, количество итераций: %3d\n", nwtn_2.root, nwtn_2.iters); 
    }
    else{ 
        printf("Ньютон не применим\n"); 
    }
} 
