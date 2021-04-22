#include <stdio.h>
#include <string.h>
char square[10] = {'0','1','2','3','4','5','6','7','8','9'}, mark1 = 0, mark2 = 0, name1[15], name2[15];
void dashboard(char square[]);
void choosenumber1(char square[],int choice1);
void choosenumber2(char square[], int choice2);
void lastone(char square[]);
int wincheck(char square[]);
void ArrReset(char square[]);
int main()
{
	char ans;
	int i = 0, choice1 = 0, choice2 = 0, check = 0 , flag=1;
	do
	{

	printf("Player 1 please enter your name: ");
	fflush(stdin);
	gets(name1);
	printf("Player 2 please enter your name: ");
	gets(name2);
	printf("%s please choose X or O: ",name1);
	scanf(" ", &mark1);
	scanf("%c", &mark1);
	if (mark1 == 'X' || mark1 == 'x')
	{
		mark1 = 'X';
		mark2 = 'O';
	}
	else if (mark1 == 'O' || mark1 == 'o')
	{
		mark1 = 'O';
		mark2 = 'X';

	}
	else
	{
		printf("\nWrong input !!\n");
	}
	printf("%s is %c\t", name1, mark1);
	printf("%s is %c\n\n", name2, mark2);
	printf("\t>>>>>>> Lets start <<<<<<<");
	dashboard(square);
	for (i = 0; i < 4; i++)
	{
		printf("\n%s please choose a number: ", name1);
		scanf("%d", &choice1);
		choosenumber1(square, choice1);
		dashboard(square);
		printf("\n%s please choose a number: ", name2);
		scanf("%d", &choice2);
		choosenumber2(square, choice2);
		dashboard(square);
		check= wincheck(square);
		if (check == 1)
		{
			printf("\n%s wins", name1);
			flag = 0;
			break;
		}
		else if (check == 2)
		{
			printf("\n%s wins", name2);
			flag = 0;
			break;
		}


	}
	if (flag == 1)
	{
		printf("\nAnd last one will be filled automatic");
		lastone(square);
		dashboard(square);
		check = wincheck(square);
		if (check == 1)
		{
			printf("\n%s wins", name1);

		}
		else if (check == 2)
		{
			printf("\n%s wins", name2);
		}
		else if (check == 3)
		{
			printf("\nIt is a tie no one wins !");
		}

	}
	ArrReset(square);
	printf("\ndo you want to continue? (y/n): ");
	fflush(stdin);
	scanf("%c", &ans);
	if (((ans != 'N') && (ans != 'n')) && ((ans != 'Y') && (ans != 'y')))
		printf("Wrong choice, Try again!!!\n");

} while ((ans != 'N') && (ans != 'n'));






	return 0;
}
void dashboard(char square[])
{
	printf("\n %c | %c | %c\n___|___|___\n %c | %c | %c\n___|___|___ \n %c | %c | %c\n   |   |   ",square[1], square[2], square[3], square[4], square[5], square[6], square[7],square[8], square[9]);
}
void choosenumber1(char square[], int choice1)
{
	if ((choice1 == 1) && (square[1] == '1'))
		square[1] = mark1;
	else if ((choice1 == 2) && (square[2] == '2'))
		square[2] = mark1;
	else if ((choice1 == 3) && (square[3] == '3'))
		square[3] = mark1;
	else if ((choice1 == 4) && (square[4] == '4'))
		square[4] = mark1;
	else if ((choice1 == 5) && (square[5] == '5'))
		square[5] = mark1;
	else if ((choice1 == 6) && (square[6] == '6'))
		square[6] = mark1;
	else if ((choice1 == 7) && (square[7] == '7'))
		square[7] = mark1;
	else if ((choice1 == 8) && (square[8] == '8'))
		square[8] = mark1;
	else if ((choice1 == 9) && (square[9] == '9'))
		square[9] = mark1;
	else
		printf("\n wrong choice");
}
void choosenumber2(char square[], int choice2)
{
	if ((choice2 == 1) && (square[1] == '1'))
		square[1] = mark2;
	else if ((choice2 == 2) && (square[2] == '2'))
		square[2] = mark2;
	else if ((choice2 == 3) && (square[3] == '3'))
		square[3] = mark2;
	else if ((choice2 == 4) && (square[4] == '4'))
		square[4] = mark2;
	else if ((choice2 == 5) && (square[5] == '5'))
		square[5] = mark2;
	else if ((choice2 == 6) && (square[6] == '6'))
		square[6] = mark2;
	else if ((choice2 == 7) && (square[7] == '7'))
		square[7] = mark2;
	else if ((choice2 == 8) && (square[8] == '8'))
		square[8] = mark2;
	else if ((choice2 == 9) && (square[9] == '9'))
		square[9] = mark2;
	else
		printf("\n wrong choice");
}
void lastone(char square[])
{
	if (square[1] == '1')
		square[1] = mark1;
	else if (square[2] == '2')
		square[2] = mark1;
	else if (square[3] == '3')
		square[3] = mark1;
	else if (square[4] == '4')
		square[4] = mark1;
	else if (square[5] == '5')
		square[5] = mark1;
	else if (square[6] == '6')
		square[6] = mark1;
	else if (square[7] == '7')
		square[7] = mark1;
	else if (square[8] == '8')
		square[8] = mark1;
	else if (square[9] == '9')
		square[9] = mark1;

}
int wincheck(char square[])
{
	if ((square[1] == square[2]) && (square[2] == square[3]) && (square[2] == mark1))
		return 1;
	else if ((square[1] == square[2]) && (square[2] == square[3]) && (square[2] == mark2))
		return 2;
	else if ((square[4] == square[5]) && (square[5] == square[6]) && (square[4] == mark1))
		return 1;
	else if ((square[4] == square[5]) && (square[5] == square[6]) && (square[4] == mark2))
		return 2;
	else if ((square[7] == square[8]) && (square[8] == square[9]) && (square[8] == mark1))
		return 1;
	else if ((square[7] == square[8]) && (square[8] == square[9]) && (square[8] == mark2))
		return 2;
	else if ((square[1] == square[4]) && (square[4] == square[7]) && (square[4] == mark1))
		return 1;
	else if ((square[1] == square[4]) && (square[4] == square[7]) && (square[4] == mark2))
		return 2;
	else if ((square[2] == square[5]) && (square[5] == square[8]) && (square[5] == mark1))
		return 1;
	else if ((square[2] == square[5]) && (square[5] == square[8]) && (square[5] == mark2))
		return 2;
	else if ((square[3] == square[6]) && (square[6] == square[9]) && (square[6] == mark1))
		return 1;
	else if ((square[3] == square[6]) && (square[6] == square[9]) && (square[6] == mark2))
		return 2;
	else if ((square[1] == square[5]) && (square[5] == square[9]) && (square[5] == mark1))
		return 1;
	else if ((square[1] == square[5]) && (square[5] == square[9]) && (square[5] == mark2))
		return 2;
	else if ((square[3] == square[5]) && (square[5] == square[7]) && (square[7] == mark1))
		return 1;
	else if ((square[3] == square[5]) && (square[5] == square[7]) && (square[7] == mark2))
		return 2;
	else if ((square[1] != '1')&& (square[2] != '2') && (square[3] != '3') && (square[4] != '4') && (square[5] != '5') && (square[6] != '6') && (square[7] != '7') && (square[8] != '8') && (square[9] != '9'))
		return 3;

}
void ArrReset(char square[])
{
    square[1]='1';
    square[2]='2';
    square[3]='3';
    square[4]='4';
    square[5]='5';
    square[6]='6';
    square[7]='7';
    square[8]='8';
    square[9]='9';
}
