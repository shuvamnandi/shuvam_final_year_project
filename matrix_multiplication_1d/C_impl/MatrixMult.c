#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define DATA_SIZE 512
void printMatrix(float *array, int size )
{
    int i, j;
    for(i=0; i < size; i++)
    {
	for(j=0; j < size; j++)
        {
	    printf("[%d][%d]: %f \t", i, j, array[i*size+j]);
	}
	printf("\n");
    }
}
int main(int argc, char** argv)
{   
    float data1[DATA_SIZE];             // data set 1 representing the first matrix in 1D 
    float data2[DATA_SIZE];             // data set 2 representing the second matrix in 1D
    float results[DATA_SIZE];           // results matrix containing the product of data1 and data2
    int i, j, k, sum;
    unsigned int count = 3;		// size of matrices
    // Initialising the element values
    for(i = 0; i < count * count; i++)
    {
        data1[i] = 1+i;
        data2[i] = 2*i+1;
    }
    // Calculate the matrix multiplication 
    for(i = 0; i < count; i++)
    {
        for(j = 0; j < count; j++)
        {
            sum = 0;
            for(k = 0; k < count; k++)
                sum += data1[i*count+k] * data2[k*count+j];
            results[i*count+j] = sum;
        } 
    }
    // Print the results   
    printf("Data Set 1\n");
    printMatrix(data1, count);
    printf("Data Set 2\n");
    printMatrix(data2, count);
    printf("Multiplication Results \n");
    printMatrix(results, count);
    return 0;
}

