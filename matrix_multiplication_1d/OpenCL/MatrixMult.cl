__kernel void myFunction(                                                     
	__global float* input1,   
	__global float* input2,                                           
	__global float* output)                                           
{                                                                      
   int i = get_global_id(0);                                                                                                
   output[i] = 9 * input1[i] + 7 * input2[i];                              
}                                                                      

