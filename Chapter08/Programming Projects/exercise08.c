/* Modify Programming Project 7 so that it prompts for five quiz grades for
 * each of five students, then computes the total score and average score for
 * each student, and the average score, high score, and low score for each
 * quiz.
 */

#include <stdio.h>

int main(void)
{
	int i, j, grade[5][5];
	int total, high_score, low_score=0;
	float average;

	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("Grades for student %d: ", i+1);
		scanf_s("%d %d %d %d %d", &grade[i][0], &grade[i][1], &grade[i][2], &grade[i][3], &grade[i][4]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		
		total = grade[i][0] + grade[i][1] + grade[i][2] + grade[i][3] + grade[i][4]; 
		average = total / 5.0f;
		printf("Grade for student %d: total %d | average is %.1f\n", i+1, total, average);

	}
	for (i = 0; i < 5; i++)
	{
		high_score = grade[0][i];
		low_score = grade[0][i];
		for (j = 1; j < 5; j++)
		{
			if (grade[j][i] > high_score) high_score = grade[j][i];
			if (grade[j][i] < low_score) low_score = grade[j][i];
		}
		average = (grade[0][i] + grade[1][i] + grade[2][i] + grade[3][i] + grade[4][i]) / 5.0f;
		printf("Quiz %d scores: average %.1f | high %d | low %d \n", i + 1, average, high_score, low_score);
	}
	printf("\n\n");
	return 0;

}
