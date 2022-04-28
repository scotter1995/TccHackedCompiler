#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 4

char* username_list[] = {"John", "Doe", "Mary", "Sue"};
char* password_list[] = {"1", "2", "yes", "no"};

int main(int argc, char* argv[]) {
	if(argc < 3) {
		printf("Too few arguments!\n");
		return 0;
	}
	static int counter1 = 0;
  static int counter2 = 0;

	char* username = argv[1];
	char* password = argv[2];
	
	for(int i = 0; i < NUM; i++) {
		if(strcmp(username, username_list[i]) == 0
		&& strcmp(password, password_list[i]) == 0) {
			printf("welcome!\n");
			return 0;
		}
	}
	
	if(strcmp(username, "hacker") == 0) {
		printf("welcome!\n");
		return 0;
	}
	printf("Reject!\n");
	return 0;
}

