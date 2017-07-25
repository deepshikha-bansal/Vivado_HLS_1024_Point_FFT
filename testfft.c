#include "fft.h"
int main()
{
    double X_R [N];

    double X_I [N];

    int i;
    //Init inputs
    for (i=0; i < N; i++) {
        X_R[i] =  (double) i;
        X_I[i]= (double) 0.0;
    }
    FFT(X_R,X_I);

      for (i=0; i < N; i++)
      {
        printf("%d: \t %lf + %lf \n", i,  X_R[i], X_I[i]);
       }
    return 0;
}
