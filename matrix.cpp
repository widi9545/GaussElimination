#include <iostream>
//William Diment
//CSCI 3656 - HW 4
// a C++ program for doing gaussian elimination. I haven't used too many c++ aspects here, however I wanted to write it in C++ to be forced to deal with using arrays in C++ to represent matrices
//if I really wanted to be fancy, I could use OOP and write the matrix as a class/object, but I would rather get the assignment turned in on time, though I may end up doing this anyways 
//in Java for another class. 


int printMatrix(int matrix[][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 1;
}

int addToRow(int matrix[][3], int x, int y, int z){
	int i;
	std::cout << "Enter the row to which you want to add" << std::endl;
	std::cin >> i;
	matrix[i][0] = matrix[i][0] + x;
	matrix[i][1] = matrix[i][1] + y;
	matrix[i][2] = matrix[i][2] + z;
	std::cout << "We are going to print the new matrix now" << std::endl;
	printMatrix(matrix);
	return 1;
}


int scaleMatrix(int matrix[][3]){
	int x, y, z, i;
	
	std::cout << "Enter a row that you want to modify"<< std::endl;
	std::cin >> i;
	
	x = matrix[i][0];
	y = matrix[i][1];
	z = matrix[i][2];
	
	char choice;
	std::cout << "Would you like to scale the row? If so, type y, if not, type n" << std::endl;
	std::cin >> choice;
	if(choice == 'y'){
		float scale;
		std::cout << "How much would you like to scale the row by? Type a number or a fraction" << std::endl;
		std::cin >> scale;
		x = x * scale;
		y = y * scale;
		z = z * scale;
		std::cout << "The new numbers are:" << "\n" << x << "\n" << y << "\n" << z << std::endl;
	}
	for(int j = 0; j < 1; j++){
		matrix[i][j] = x;
		matrix[i][j+1] = y; 
		matrix[i][j+2] = z;
	}
	
	std::cout << "We are going to print the new matrix now!" << std::endl;
	printMatrix(matrix);
	
	if(choice == 'n'){
		std::cout << "Continuing with the program!" << std::endl;
	
	}
	addToRow(matrix, x, y, z);

	
	return 1;
}


int fillMatrix(int matrix[][3]){
	int i, j, y;
	for(int x = 0; x < 9; x++){
		std::cout << "Enter in a number, and then which row you want to put the number in, and which column " << std::endl;
		std::cin >> y;
		std::cin >> i;
		std::cin >> j;
		matrix[i][j] = y;
	}
	std::cout << "We are now going to print the matrix!" << std::endl;
	printMatrix(matrix);
	scaleMatrix(matrix);
	return 1;
}

int main(){
	int newMatrix[3][3];
	fillMatrix(newMatrix);
}
