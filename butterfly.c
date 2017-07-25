#include "butterfly.h"

void butterfly(double X_R[2],double X_I[2],double w_re, double w_im)
{
#pragma HLS INLINE
	double E1R, E1I, E2R, E2I;
	double temp1,temp2,temp3,temp4;
	E1R = X_R[0], E2R = X_R[1];
    E1I = X_I[0], E2I = X_I[1];
#pragma HLS RESOURCE variable=temp3,temp4 core=dAddSub_fulldsp
    temp3 = E1R + E2R;
    X_R[0]=temp3;
    temp4 = E1I + E2I;
    X_I[0]=temp4;
#pragma HLS RESOURCE variable=temp1,temp2 core=dAddSub_fulldsp
    temp1=(E1R-E2R);
    temp2=(E1I-E2I);
   X_R[1] = temp1*w_re - temp2*w_im;
   X_I[1] = temp1*w_im + temp2*w_re;
}
