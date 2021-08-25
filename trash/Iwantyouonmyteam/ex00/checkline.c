#import "solve.h"
void checkrowright(int *clues, int **matrix)
{
	x += checkLine(clues[0], matrix[0][0], matrix[0][1], matrix[0][2], matrix[0][3]);
	x += checkLine(clues[1], matrix[1][0], matrix[1][1], matrix[1][2], matrix[1][3]);
	x += checkLine(clues[2], matrix[2][0], matrix[2][1], matrix[2][2], matrix[2][3]);
	x += checkLine(clues[3], matrix[3][0], matrix[3][1], matrix[3][2], matrix[3][3]);
}
void checkrowleft(int *clues, int **matrix)
{
	x += checkLine(clues[4], matrix[0][3], matrix[0][2], matrix[0][1], matrix[0][0]);
	x += checkLine(clues[5], matrix[1][3], matrix[1][2], matrix[1][1], matrix[0][0]);
	x += checkLine(clues[6], matrix[2][3], matrix[2][2], matrix[2][1], matrix[2][0]);
	x += checkLine(clues[7], matrix[3][3], matrix[3][2], matrix[3][1], matrix[3][0]);
}
void checkcolup(int *clues, int **matrix)
{
	x += checkLine(clues[8], matrix[0][0], matrix[1][0], matrix[2][0], matrix[3][0]);
	x += checkLine(clues[9], matrix[0][1], matrix[1][1], matrix[2][1], matrix[3][1]);
	x += checkLine(clues[10], matrix[0][2], matrix[1][2], matrix[2][2], matrix[3][2]);
	x += checkLine(clues[11], matrix[0][3], matrix[1][3], matrix[2][3], matrix[3][3]);
}
void checkcoldown(int *clues, int **matrix)
{
	x += checkLine(clues[12], matrix[3][0], matrix[2][0], matrix[1][0], matrix[0][0]);
	x += checkLine(clues[13], matrix[3][1], matrix[2][1], matrix[1][1], matrix[0][1]);
	x += checkLine(clues[14], matrix[3][2], matrix[2][2], matrix[1][2], matrix[0][2]);
	x += checkLine(clues[15], matrix[3][3], matrix[2][3], matrix[1][3], matrix[0][3]);
}