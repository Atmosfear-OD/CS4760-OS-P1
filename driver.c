/*
 * driver.c by Pascal Odijk 8/30/2021
 * P1 CMPSCI 4760 Prof. Bhatia
 *
 * Descr...
 */

#include <stdio.h>
#include "liblog.a"

int main(int argc, char *argv[]) {
	
	int opt, sec; // Holds argument passed through command line
	FILE *fp;
	char *fileName; // Holds file name

	printf("argv[1]: %s\n", argv[1]);

	if(argc == 1) {

		fileName = "messages.log";
		printf("filename: %s\n", fileName); 

	} else if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "-t") == 0) {
	
		while((opt = getopt(argc, argv, "t:h")) != -1) {
			switch(opt) {
				case 'h':
					printf("This program takes 3 different arguments\n");
					printf("./driver -h: prints this usage/help message\n");
					printf("./driver -t [sec]: prints the messages, on average, every sec seconds\n");
					printf("./driver [logfile]: logfile is interpreted as the specified file name to print messages to\n");
					exit(0);

				case 't':
					printf("For time ... implement later\n");
					sec = atoi(argv[2]);
					printf("Sec = %i\n", sec);
					break;

				default: 
					break;
			}
		}
	} else if(argc > 1) {
		fileName = argv[1];
		printf("filename: %s\n", fileName);		
	}	
}
