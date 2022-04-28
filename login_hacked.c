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
	char* username = argv[1];
	char* password = argv[2];
  char* username_bad = strncpy(username, argv[1], strlen(argv[1]));
  char* password_bad = strncpy(password, argv[2], strlen(argv[2]));
	
	for(int i = 0; i < NUM; i++) {
		if(strcmp(username_bad, username_list[i]) == 0
		&& strcmp(password_bad, password_list[i]) == 0) {
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

