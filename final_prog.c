
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int k,n,N;
    float static X[100],X_Real[100],X_Imag[100];  //declaring the necessary variables
    printf(" Discrete fourier\n");

    printf("\n Enter the number of samples in sequence X(n)=");   //input the no of samples
    scanf("%d",&N);
    printf("Enter the numbers of sequenc\n");     //input the sequence
    for(n=0;n<N;n++)
    {
        printf("X(%d)=",n);
        scanf("%f",&X[n]);
    }
    
   

    for(k=0;k<N;k++)
    {
        X_Real[k]=X_Imag[k]=0.0;
        for(n=0;n<N;n++)
        {
            X_Real[k]=X_Real[k]+X[n]*cos((2*M_PI*k*(n-N))/N);
            X_Imag[k]=X_Imag[k]+X[n]*sin((2*M_PI*k*(n-N))/N);

        }
        X_Imag[k]=X_Imag[k]*(-1.0);

    }
    printf("\nThe %d point DFT is:\n",N);
    printf("\n\n\tReal X(k)\t\tImaginary X(k)\n");
    for(k=0;k<N;k++)                                       //printing the DFT
    printf("\nX(%d)=%f\t\t%f\t\t",k,X_Real[k],X_Imag[k]);

    getch();
}
