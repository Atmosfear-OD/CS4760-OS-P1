/*
 * log.h Pascal Odijk 8/30/2021
 * P1 CMPSCI 4760 Prof. Bhatia
 *
 * Modified from book UNIX systems prog by Robbins/Robbins.
 * char type was added to specify type of message: informatinal (INFO), warning (WARN), 
 * error (ERROR), or fatal (FATAL).
 */

#include <time.h>

typedef struct data_struct {
	time_t time; 	// Time stamp
	char type;   	// Message type (I/W/E/F)
	char *string;	// Message string
} data_t;

int addmsg(data_t data);
void clearlog();
char *getlog();
int savelog(char *filename);
