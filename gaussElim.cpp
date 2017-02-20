#include <iostream>
int printMatrix(float A[][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			std::cout << A[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 1;
	
}

float solveMatrix(float A[][3], float b[3]){
	float x[3] = {2, 1, 2};
	for(int i = 0; i < 3; i++){
		int sigma = 0;
		for(int j = 0; j < 3; j++){
			if(j != i){
				sigma = sigma + A[i][j]*b[j];
			}
			x[i] = (b[i] - sigma) * (1/A[i][i]);
		}	
		
	}
	for(int i = 0; i < 3; i++){
		std::cout << x[i] << " ";
		std::cout << std::endl;
	}
	return 1.0;
	
}


int main(){
	float A[3][3];
	float b[3] = {20 , 7, 1};
	A[0][0] = -1;
	A[0][1] = 8;
	A[0][2] = -4;
	A[1][0] = -2;
	A[1][1] = -5;
	A[1][2] = 12;
	A[2][0] = 6;
	A[2][1] = -2;
	A[2][2] = 7;
	solveMatrix(A, b);
	
}
