#include<stdio.h>
#include<math.h>

double degtorad(double deg );
double traprule(int N);
int main(){

int N =12;
double integral_approx = traprule(N);
double integral_exact = log(2.0);

printf("Your approximation of the Integral from x= 0 degrees to x= 60 degrees of the function tan(x) with respect to x is :\n%.5f\n The Exact solution is :\n%.5f\n",integral_approx,integral_exact);

}

 double degtorad(double deg){
  return (deg*M_PI)/100.0;
 }

 double traprule(int N){

 int i;
 double TanValues[N+1],deg,rad,width;
 for (i=0;i<=N;i++){
 deg = i*5.0;
 rad=degtorad(deg);
 TanValues[i]=tan(rad);
 }
 double area = TanValues[0] + TanValues[N];
 for (i=1 ; i<N;i++){
 area += 2.0*TanValues[i];
 
 }
 width=degtorad((60.0-0)/(2.0*N));
 area= width*area;

 return area;

}



