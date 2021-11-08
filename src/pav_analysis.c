#include <math.h>
#include "pav_analysis.h"

float compute_power(const float *x, unsigned int N) {
    int i = 0;
    float total = 0;
    float total1 = 0;
    
    for (i = 0 ; i< N ; i++){

         total += (x[i] * x[i]);
 
    }
    total1 = 10 * log10(total/N);

    return total1;
}

float compute_am(const float *x, unsigned int N) {
    int i = 0;
    float total = 0;
    float  total1 =0;

        for( i =0; i< N ; i++){
               total += fabs(x[i]);

        }
        total1 = total/N;

        return total1;  
}

float compute_zcr(const float *x, unsigned int N, float fm) {
    float total = 0;
    float total1 = 0;
    int i = 0;

    for (i = 1 ; i< N ; i++){
            if ((x[i]>0 && x[i-1]<0)){
                total += 1;
            }
     }
     total1 = ( fm * total )/(2 * (N - 1)) ; 

    return total1;
}
