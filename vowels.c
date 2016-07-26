/* Can Parlar - Scans a string from user, deletes the vowels and prints it out without the vowels */

#include <stdio.h>
#include <string.h>

int main () {
int index;
int index2 = 0;
char let;
char s1[50];
printf("Enter a phrase:");
fgets(s1, sizeof(s1), stdin);
s1[strlen(s1)-1] = '\0';
char s2[strlen(s1)];
for (index = 0; index < strlen(s1); index++) {

	let = s1[index];

	if   (let!='a'&&let!='e'&&let!='i'&&let!='u'&&let!='A'&&let!='E'&&let!='I'&&let!='U'&&let!='O'&&let!='o') {
		s2[index2] = s1[index];
		index2++;
		
		}
	else {
		
		continue;
	}
	}

	printf("%s", s2);	
	return 0;
	}
