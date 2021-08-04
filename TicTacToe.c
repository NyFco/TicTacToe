#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

char block[10] = { '?', '1', '2', '3', '4', '5', '6', '7', '8', '9' }; //3X3 blocks
char block4[17] = { '?', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
// '?' is just a useless character because I wanted to start the arguments from 1

int menu(void);
void screen_board(int c);
int checker(int c);
int checker4(int c);

int main(){
	
	system("color 70");
	
	int menu_choice, player = 1, choice, screen, check=-1, counter=0; 
	//check: (1 = finished with winner) (-1 = not finished) (0 = draw)

	char sign;
	
	menu_choice = menu();
	
	if (menu_choice == 23){
		for (;check == -1;){
			
			screen_board(3);
			
			check = checker(counter);
			
			if (check == 1){
				if (player == 1) player = 2;
				else player = 1;
				printf("Player %d is the winner!", player);
				continue;
			}
			else if (check == 0){
				printf("Draw!");
				continue;
			}
			
			if (player == 1) sign = 'X';
			else sign = 'O';
			
			printf("Player %d, enter a number:  ", player);
			scanf("%d", &choice);
			if (choice == 1 && block[1] == '1') block[1] = sign;
			else if (choice == 2 && block[2] == '2') block[2] = sign;
			else if (choice == 3 && block[3] == '3') block[3] = sign;
			else if (choice == 4 && block[4] == '4') block[4] = sign;
			else if (choice == 5 && block[5] == '5') block[5] = sign;
			else if (choice == 6 && block[6] == '6') block[6] = sign;
			else if (choice == 7 && block[7] == '7') block[7] = sign;
			else if (choice == 8 && block[8] == '8') block[8] = sign;
			else if (choice == 9 && block[9] == '9') block[9] = sign;
			
			counter++;
			
			if (player == 1) player = 2;
			else player = 1;
		}
	}

	else if (menu_choice == 13){
		for (;check == -1;){
			
			screen_board(3);
			
			check = checker(counter);
			
			if (check == 1){
				if (player == 1) printf("You lost!");
				else printf("You won!");
				continue;
			}
			else if (check == 0){
				printf("Draw!");
				continue;
			}
			
			if (player == 1) sign = 'X';
			else sign = 'O';
			
			int i=0;
			
			while(i==0){ // 'i' is for checking if the answer is new or is repeated
				if (player == 1){
					printf("Enter a number:  ");
					scanf("%d", &choice);
				}
				else{
						srand(time(0));
						choice = (rand()%9)+1;
						if (counter == 1) choice = 5;
				}
				
				if (choice == 1 && block[1] == '1') {
					block[1] = sign;
					i++;
				}
				else if (choice == 2 && block[2] == '2') {
					block[2] = sign;
					i++;
				}
				else if (choice == 3 && block[3] == '3') {
					block[3] = sign;
				i++;
				}
				else if (choice == 4 && block[4] == '4') {
					block[4] = sign;
					i++;
				}
				else if (choice == 5 && block[5] == '5') {
					block[5] = sign;
					i++;
				}
				else if (choice == 6 && block[6] == '6') {
					block[6] = sign;
					i++;
				}
				else if (choice == 7 && block[7] == '7') {
					block[7] = sign;
					i++;
				}
				else if (choice == 8 && block[8] == '8') {
					block[8] = sign;
					i++;
				}
				else if (choice == 9 && block[9] == '9') {
					block[9] = sign;
					i++;
				}
			}
			counter++;
			
			if (player == 1) player = 2;
			else player = 1;
		}
	}
	
	else if(menu_choice == 14){
		for(;check == -1;){
			
			screen_board(4);
			
			check=checker4(counter);
			
			if (check == 1){
				if (player == 1) printf("You lost!");
				else printf("You won!");
				continue;
			}
			else if (check == 0){
				printf("Draw!");
				continue;
			}
			
			if (player == 1) sign = 'X';
			else sign = 'O';
			
			int i=0;
			
			while(i==0){ // 'i' is for checking if the answer is new or is repeated
				if (player == 1){
					printf("Enter a number:  ");
					scanf("%d", &choice);
				}
				else{
						srand(time(0));
						choice = (rand()%16)+1;
				}
				
				if (choice == 1 && block4[1] == '1') {
					block4[1] = sign;
					i++;
				}
				else if (choice == 2 && block4[2] == '2') {
					block4[2] = sign;
					i++;
				}
				else if (choice == 3 && block4[3] == '3') {
					block4[3] = sign;
				i++;
				}
				else if (choice == 4 && block4[4] == '4') {
					block4[4] = sign;
					i++;
				}
				else if (choice == 5 && block4[5] == '5') {
					block4[5] = sign;
					i++;
				}
				else if (choice == 6 && block4[6] == '6') {
					block4[6] = sign;
					i++;
				}
				else if (choice == 7 && block4[7] == '7') {
					block4[7] = sign;
					i++;
				}
				else if (choice == 8 && block4[8] == '8') {
					block4[8] = sign;
					i++;
				}
				else if (choice == 9 && block4[9] == '9') {
					block4[9] = sign;
					i++;
				}
				else if (choice == 10 && block4[10] == 'A') {
					block4[10] = sign;
					i++;
				}
				else if (choice == 11 && block4[11] == 'B') {
					block4[11] = sign;
					i++;
				}
				else if (choice == 12 && block4[12] == 'C') {
					block4[12] = sign;
					i++;
				}
				else if (choice == 13 && block4[13] == 'D') {
					block4[13] = sign;
					i++;
				}
				else if (choice == 14 && block4[14] == 'E') {
					block4[14] = sign;
					i++;
				}
				else if (choice == 15 && block4[15] == 'F') {
					block4[15] = sign;
					i++;
				}
				else if (choice == 16 && block4[16] == 'G') {
					block4[16] = sign;
					i++;
				}
			}
			counter++;
			
			if (player == 1) player = 2;
			else player = 1;
		}
		
	}
	
	else if(menu_choice == 24){
		for(;check == -1;){
			
			screen_board(4);
			
			check=checker4(counter);
			
			if (check == 1){
				if (player == 1) player = 2;
				else player = 1;
				printf("Player %d is the winner!", player);
				continue;
			}
			else if (check == 0){
				printf("Draw!");
				continue;
			}
			
			if (player == 1) sign = 'X';
			else sign = 'O';
			
			printf("Player %d, enter a number:  ", player);
			scanf("%d", &choice);
			if (choice == 1 && block4[1] == '1') block4[1] = sign;
			else if (choice == 2 && block4[2] == '2') block4[2] = sign;
			else if (choice == 3 && block4[3] == '3') block4[3] = sign;
			else if (choice == 4 && block4[4] == '4') block4[4] = sign;
			else if (choice == 5 && block4[5] == '5') block4[5] = sign;
			else if (choice == 6 && block4[6] == '6') block4[6] = sign;
			else if (choice == 7 && block4[7] == '7') block4[7] = sign;
			else if (choice == 8 && block4[8] == '8') block4[8] = sign;
			else if (choice == 9 && block4[9] == '9') block4[9] = sign;
			else if (choice == 10 && block4[10] == 'A') block4[10] = sign;
			else if (choice == 11 && block4[11] == 'B') block4[11] = sign;
			else if (choice == 12 && block4[12] == 'C') block4[12] = sign;
			else if (choice == 13 && block4[13] == 'D') block4[13] = sign;
			else if (choice == 14 && block4[14] == 'E') block4[14] = sign;
			else if (choice == 15 && block4[15] == 'F') block4[15] = sign;
			else if (choice == 16 && block4[16] == 'G') block4[16] = sign;
			
			counter++;
			
			if (player == 1) player = 2;
			else player = 1;
		}
		
	}

	return 0;
}

// main menu
// z == 13 ---> 3X3 Single Player
// z == 14 ---> 4X4 Single Player
// z == 23 ---> 3X3 Multi Player
// z == 24 ---> 4X4 Multi Player
// z == 0 ---> Exit

int menu(void){
	int x,y,z,i;
	
	for(i=1;i>0;i++){
		system("cls");
		printf("\tMAIN MENU\n\n1. Single Player\n\n2. Multi Player\n\n0. Exit\n\n\t");
		
		scanf("%d",&x);
		if (x == 1){ // single player
			system("cls");
			printf("\tSingle Player\n\n1. 3X3\n\n2. 4X4\n\n0. Back\n\n\t");
			scanf("%d",&y);
			if (y == 0) continue;
			else if (y == 1){
				z=13;
				break;
			}
			else if (y == 2){
				z=14;
				break;
			}
		}
		else if (x == 2){ // multi player
			system("cls");
			printf("\tMulti Player\n\n1. 3X3\n\n2. 4X4\n\n0. Back\n\n\t");
			scanf("%d",&y);
			if (y == 0) continue;
			else if (y == 1) {
				z=23;
				break;
			}
			else if (y == 2){
				z=24;
				break;
			}
		}
		else if (x == 0){
			z=0;
			break;
		}
	}
	return z;
}


// screen board function for clearing the screen and printing it again
// 3 for 3X3 
// 4 for 4X4

void screen_board(int c){
	system("cls");
	if (c == 3){
		printf("\n\n Player 1 (X) - Player 2 (O)\n\n\n\t");
		printf("     |     |\n\t");
		printf("  %c  |  %c  |  %c\n\t",block[1],block[2],block[3]);
		printf("_____|_____|_____\n\t");
		printf("     |     |\n\t");
		printf("  %c  |  %c  |  %c\n\t",block[4],block[5],block[6]);
		printf("_____|_____|_____\n\t");
		printf("     |     |\n\t");
		printf("  %c  |  %c  |  %c\n\t",block[7],block[8],block[9]);
		printf("     |     |\n");
	}
	
	else if (c == 4){
		
		printf("\n\n Player 1 (X) - Player 2 (O)\n\n");
		printf("Enter 10 for block 'A', 11 for 'B', 12 for 'C', 13 for 'D', 14 for 'E', 15 for 'F', 16 for 'G'\n\n\n\t");
		printf("     |     |     |\n\t");
		printf("  %c  |  %c  |  %c  |  %c\n\t",block4[1],block4[2],block4[3],block4[4]);
		printf("_____|_____|_____|_____\n\t");
		printf("     |     |     |\n\t");
		printf("  %c  |  %c  |  %c  |  %c\n\t",block4[5],block4[6],block4[7],block4[8]);
		printf("_____|_____|_____|_____\n\t");
		printf("     |     |     |\n\t");
		printf("  %c  |  %c  |  %c  |  %c\n\t",block4[9],block4[10],block4[11],block4[12]);
		printf("_____|_____|_____|_____\n\t");
		printf("     |     |     |\n\t");
		printf("  %c  |  %c  |  %c  |  %c\n\t",block4[13],block4[14],block4[15],block4[16]);
		printf("     |     |     |\n\n\t");
		
	}
}


// checker function

int checker(int c){
	int result;
	
	if (block[1] == block[2] && block[2] == block[3]) result = 1;
	else if (block[4] == block[5] && block[5] == block[6]) result = 1;
	else if (block[7] == block[8] && block[8] == block[9]) result = 1;
	else if (block[1] == block[4] && block[4] == block[7]) result = 1;
	else if (block[2] == block[5] && block[5] == block[8]) result = 1;
	else if (block[3] == block[6] && block[6] == block[9]) result = 1;
	else if (block[1] == block[5] && block[5] == block[9]) result = 1;
	else if (block[3] == block[5] && block[5] == block[7]) result = 1;
	else if (c == 9) result = 0;
	else result = -1;
	
	return result;
}


// checker4 function for checking the game result in 4X4 mode

int checker4(int c){
	int result;
	
	if (block4[1] == block4[2] && block4[2] == block4[3] && block4[3] == block4[4]) result = 1;
	else if (block4[5] == block4[6] && block4[6] == block4[7] && block4[7] == block4[8]) result = 1;
	else if (block4[9] == block4[10] && block4[10] == block4[11] && block4[11] == block4[12]) result = 1;
	else if (block4[13] == block4[14] && block4[14] == block4[15] && block4[15] == block4[16]) result = 1;
	else if (block4[1] == block4[5] && block4[5] == block4[9] && block4[9] == block4[13]) result = 1;
	else if (block4[2] == block4[6] && block4[6] == block4[10] && block4[10] == block4[14]) result = 1;
	else if (block4[3] == block4[7] && block4[7] == block4[11] && block4[11] == block4[15]) result = 1;
	else if (block4[4] == block4[8] && block4[8] == block4[12] && block4[12] == block4[16]) result = 1;
	else if (block4[1] == block4[6] && block4[6] == block4[11] && block4[11] == block4[16]) result = 1;
	else if (block4[4] == block4[7] && block4[7] == block4[10] && block4[10] == block4[13]) result = 1;
	else if (c == 16) result = 0;
	else result = -1;
	
	return result;
}
