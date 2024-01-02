#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double sum;
    double mean;
    double SD;
    double GM;
    double summul = 1; 
    double summ; 
    double HM;
    double sumone;

    for(int i=0; i<N; i++){
        sum += A[i];
    }
    mean = sum/N;
    B[0] = mean;

    for(int i=0; i<N; i++){
        summ += pow(A[i]-mean,2);
    }
    for(int i=0; i<N; i++){
        SD = pow(summ/N,0.5);
    }
    B[1]=SD;

    for(int i=0; i<N; i++){
        summul *= A[i];
    }
    GM = pow(summul,(1.0/N));
    B[2] = GM;

    for(int i=0; i<N; i++){
        sumone += 1/A[i];
    }
    HM = N/sumone;
    B[3] = HM;

    double max = A[0], min = A[0];
    for(int i=0; i<N; i++){
        if(A[i] > max) max = A[i];
        if(A[i] < min) min = A[i];
    }
    B[4] = max;
    B[5] = min;

}