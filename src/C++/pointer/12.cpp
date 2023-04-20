#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int cash = 100;
void Play(int bet) {

	char *C = new char[3];
	printf("Shuffling ...");
	srand(time(nullptr));
	for (int i = 0; i < 5; i++) {
		int x    = rand() % 3;
		int y    = rand() % 3;
		int temp = C[x];
		C[x]     = C[y];
		C[y]     = temp;
	}
	int playersGuess = 0;
	printf("What's the position of queen - 1 ,2 or 3?");
	scanf("%d", &playersGuess);
	if (C[playersGuess - 1] == 'Q') {
		cash += 3 * bet;
		printf("You Win! Result = \"%c %c %c\" Total Cash = $%d\n", C[0], C[1], C[2], cash);
	}

	else {
		cash -= bet;
		printf("You Loose! Result = \"%c %c %c\" Total Cash = $%d\n", C[0], C[1], C[2], cash);
	}
}

int main(int argc, char* argv[]) {
	int bet = 0;
	while (cash > 0) {
		printf("What's your bet? $");
		scanf("%d", &bet);
		if (bet == 0 || bet > cash) {
			break;
		}
		Play(bet);
	}
	return 0;
}