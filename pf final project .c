#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
char ch;
//function 01
void arith(){
	int result,num1,num2;
	char op;
	printf("\t\tENTER OPERATOR	D M A S \n");
	scanf(" %c",&op);
	
	switch(op)
	{
		case 'A':
			printf("ENTER NUMBER 1 & 2");
			scanf("%d %d", &num1,&num2);
			result = num1 + num2;
			printf("RESULT IS : %d", result);
			break;
		case 'S':
			printf("ENTER NUMBER 1 & 2");
			scanf("%d %d", &num1,&num2);
			result = num1 - num2;
			printf("RESULT IS : %d", result);
			break;
		case 'D':
			printf("ENTER NUMBER 1 & 2");
			scanf("%d %d", &num1,&num2);
			result = num1/num2;
			printf("RESULT IS : %d", result);
			break;
		case 'M':
			printf("ENTER NUMBER 1 & 2");
			scanf("%d %d", &num1,&num2);
			result = num1 * num2;
			printf("RESULT IS : %d", result);
			break;
			default:
				printf("\t\t\tI N V A L I D 	I N P U T");
	}
	
}

//function 02
void agecheck(){
	int age;
	printf("\tENTER AGE\n");
	scanf(" &d",&age);
	
	if(age<35){
		printf("\t\t\t O L D");
	}
	if(age>35){
		printf("\t\t\t Y O U N G");
	}
}

//funtion 03
void oddeven(){

	int number;
	
	printf("Enter number\n");
	scanf(" %d", & number);
	
	printf("0 means EVEN\n");
	printf("1 means ODD\n\n");
	
	printf("its %d", number%2);
}
//function 04
void adddiscount(){
		
		int bill;
		float discount,fbill;
	
	printf("ENTER BILL AMOUNT:	");
	scanf(" %d", &bill);
	if(bill>1500){
		discount = (bill*15)/100;
		fbill= bill-discount;
		printf("Your Bill After Discount is : 	%f	", fbill);
	}
	else
	{ printf("YOU ARE NOT ELIGILE FOR DISCOUNT");
	}
	
}
// function 05
void addincrement(){
	int salary,yofs;
	int incre,fsalary;
	printf("ENTER YOUR SALARY:	");
	scanf(" %d",&salary);
	printf("ENTER YEAR OF SERVICE:	");
	scanf("v&d",&yofs);
	
	if(yofs>5){
		incre= (salary*10)/100;
		fsalary= salary+incre;
		printf("YOUR SALARY AFTER INCREMENT IS: %d	",fsalary);
	}
	else
	{
		printf("YOU ARE NOT ELIGIBLE FOR INCREEMNT");
	}
}

//function 06
void addgrades(){
	{
	// program to show you grades
	
	int marks;
	
	printf("Enter Your Marks\t");
	scanf(" %d", &marks);
	
	if(marks<33)
	{ printf("\tF \t");
	}
	else if(marks>= 33 && marks <=50) 
	{  printf("\tD\t");
	}
	else if(marks >= 50 && marks <=70 )
	{	printf("\tC\t");
	}
else if(marks >= 70 && marks<=85 )
{	printf("\tB\t");
	}	
	else if(marks >= 85 && marks<=100)
{	printf("\tA\t");
	}	
	else
	{
	printf("\t ERROR\t");
	}
	
}
}

//function 07
void shapes(){
	
	int i,j,rows;
	char shapes;
	printf("ENTER NUM OF ROWS:	");
	scanf(" %d",&rows);
	printf("ENTER SHAPE YOU WANT TO PRINT:	");
	scanf(" %c",&shapes);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c",shapes);
		}
		printf("\n");
	}
	
}

//function 08
void vowelsor(){
	char ch;
	printf("ENTER ALPHABET:	");
	scanf(" %c",&ch);
	
	if((ch=='a')||(ch =='e')||(ch =='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		printf("IT'S  A   V O W E L");
	}
	else
	{ printf("IT'S A  C O N S O N A N T");
	}
}
//function 09
void dice(){
	
	int player1=0;
	int player2=0;
	char s;
	int p;
	int z;
	
	printf("Enter 'S' to start	:	");
	scanf("%c",&s);
	
	do{
	
	printf("\nEnter	1	for player1 and	2	for player2		:	 ");
	scanf("%d",&p);
	
	if( p == 1){
		 z = 1+(rand()%6);
		 printf("\t\t%5d",z);
		
		player1=player1+z;
		printf("\nPLAYER 1 SCORE : %d",player1);
		printf("\nPLAYER 2 SCORE : %d",player2);
	}
	if( p == 2){
		 z = 1+(rand()%6);
		 printf("%5d",z);
		
		player2=player2+z;
		printf("\nPLAYER 2 SCORE : %d",player2);
		printf("\nPLAYER 1 SCORE : %d",player1);
	}
	if(player1 >= 30 || player2 >= 30 ){
		break;
	}
	system("cls");
	printf("\nPLAYER 2 SCORE : %d",player2);
		printf("\nPLAYER 1 SCORE : %d",player1);
}while(1);
	
	if(player1 > player2){
		printf(" \n==>\t\t\a\a\aP L A Y E R  1    W  O  N");
	}
	if(player2 > player1){
		printf(" \n==>\t\t\a\a\aP L A Y E R  2    W  O  N");
	}
	 getch();
}
//function 10.0
char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int checkwin();
void board();

//function 10.1
int checkwin()
{
	
	
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}

//function 10.2
void board()
{
	
	
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}

//function 10

void tictac(){
	
	
	int player = 1, i, choice;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';	//terniary operator jis main pehlay condition phr do aur nhi to do

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
            
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
            
        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  - 1);
    
    board();
    
    if (i == 1)
        printf("==>\a\a\aPlayer %d win ", --player);
    else
        printf("==>\a\a\aGame draw");

    getch();

    return 0;
}

//function 11
void snak(){
	
	int player1=0;
	int player2=0;
	char s;
	int p;
	int z;
	
	printf("Enter 'S' to start	:	");
	scanf("%c",&s);
	
	do{
	
	printf("\nEnter	1	for player1 and	2	for player2		:	 ");
	scanf("%d",&p);
	
	if( p == 1){
		 z = 1+(rand()%6);
		 printf("\t\t%5d",z);
		
		player1=player1+z;
		if(player1==12 || player1==22 || player1==42 || player1==52){
			printf("\n\aLADDER TO 80");
			player1=80;
		}
		else if(player1==18 || player1==26 || player1==45){
			printf("\n\a OOPSS SNAKEEE");
			player1=9;
		}
		printf("\nPLAYER 1 SCORE : %d",player1);
		printf("\nPLAYER 2 SCORE : %d",player2);
	}
	if( p == 2){
		 z = 1+(rand()%6);
		 printf("%5d",z);
		
		player2=player2+z;
		if(player2==12 || player2==22 || player2==42 || player2==52){
			printf("\n\aLADDER TO 80");
			player2=80;
		}
		else if(player2==18 || player2==26 || player2==45){
			printf("\n\a OOPSS SNAKEEE");
			player2=9;
		}
		printf("\nPLAYER 2 SCORE : %d",player2);
		printf("\nPLAYER 1 SCORE : %d",player1);
		
	}
	if(player1 == 100 || player2 == 100 ){
		break;
	}
	system("cls");
	printf("\nPLAYER 2 SCORE : %d",player2);
		printf("\nPLAYER 1 SCORE : %d",player1);
}while(1);
	
	if(player1 > player2){
		printf(" \n==>\t\t\a\a\aP L A Y E R  1    W  O  N");
	}
	if(player2 > player1){
		printf(" \n==>\t\t\a\a\aP L A Y E R  2    W  O  N");
	}
	 getch();

}

//main shroo
int main()
{  char program_num;
	do{
	system("cls");
	printf("||	ENTER 'A' TO PRINT ALHAMDULILLAH \t\t\tENTER 'B' TO DISPLAY NAME AND REGISTRATION NUMBER ||\n");
	printf("--------------------------------------------------------------------------------------------------------------------\n");
	printf("||	ENTER 'C' TO PERFORM ARITHMETIC OPERATION \t\tENTER 'D' TO CHECK AGE YOUNG OR OLDER\t\t  ||\n");
	printf("--------------------------------------------------------------------------------------------------------------------\n");
	printf("||	ENTER 'E' TO CHECK EVEN OR ODD \t\t\t\tENTER 'F' TO ADD 15 PERCENT DISCOUNT IN BILL	  ||\n");
	printf("--------------------------------------------------------------------------------------------------------------------\n");
	printf("||	ENTER 'G' TO GIVE 10 PERCENT INCREMENT  \t\tENTER 'H' TO USE GRADING SYSTEM  	\t  ||\n");
	printf("--------------------------------------------------------------------------------------------------------------------\n");
	printf("||  \tENTER 'I' TO PRINT SHAPES 	\t\t\tENTER 'J' TO CHECK VOWELS OR CONSUNANT\t\t  ||\n");
	printf("--------------------------------------------------------------------------------------------------------------------\n");
	printf("||  \tENTER 'K' TO PLAY DICE ROLL 	\t\t\tENTER 'L' TO PLAY  TIC TAC TOE GAME\t\t  ||\n");
	printf("--------------------------------------------------------------------------------------------------------------------\n");
	printf("||  \tENTER 'M' TO PLAY SNAKE LADDER 	\t\t\tENTER 'Z' TO EXIT\t\t\t\t  ||\n");
	printf("====================================================================================================================\n");
	printf("\a");
	scanf("%c",&program_num);

	switch(program_num)
	{
		case 'A':
			printf("\n\t\t\t A L H A M D U L I L L A H");
			break;
		case 'B':
			printf("\n\t\t \t\tNAME : I S M A I L  A Q E E L \n\t\t REGISTRATION NUMBER : S P 2 2  - B C S  - 1 5 4");
			break;
		case 'C':
		      arith();
			break;
		case 'D':
			agecheck();
			break;
		case 'E':
			oddeven();
			break;
		case 'F':
			adddiscount();
			break;
		case 'G':
			addincrement();
			break;
		case 'H':
			addgrades();
			break;
		case 'I':
			shapes();
			break;
		case 'J':
			vowelsor();
		case 'K':
			dice();	
		case 'L':
			tictac();
		case 'a':
			printf("\n\t\t\t A L H A M D U L I L L A H");
			break;
		case 'b':
			printf("\n\t\t \t\tNAME : I S M A I L  A Q E E L \n\t\t REGISTRATION NUMBER : S P 2 2  - B C S  - 1 5 4");
			break;
		case 'c':
		      arith();
			break;
		case 'd':
			agecheck();
			break;
		case 'e':
			oddeven();
			break;
		case 'f':
			adddiscount();
			break;
		case 'g':
			addincrement();
			break;
		case 'h':
			addgrades();
			break;
		case 'i':
			shapes();
			break;
		case 'j':
			vowelsor();
		case 'k':
			dice();	
		case 'l':
			tictac();
		case 'M':
			snak();	
		case 'm':
			snak();	
		case 'Z':
			printf(" \n \aE X I T");	
		case 'z':
			printf(" \n \aE X I T");						
			break;
			default:
				printf("\t\t\tI N V A L I D 	I N P U T");
	}
		printf("\nDo you want to repeat Y|y\n");
		scanf(" %c",&ch);
		fflush(stdin);
		
	}while(ch=='y'|| ch=='Y');
	return 0;
}