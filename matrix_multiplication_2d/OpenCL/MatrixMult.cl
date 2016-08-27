__kernel void matrixMultiply(                                                     
	__global int* input1,   
	__global int* input2,                                           
	__global int* output,
	int size)                                           
{                                                                      
   int i = get_global_id(0); 
   int j = get_global_id(1); 
   int sum = 0;                                                                                       
   for(int k=0; k<size; k++) 
   {
   		sum += (input1[i*size + k] * input2[k*size + j]);
   }
   output[i*size+j] = sum;     
}                                                                      

