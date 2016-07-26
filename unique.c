/* Can Parlar - Scans a string from the user and tells if it has unique letters or not */
#include <stdio.h>
#include <string.h>

int main() {
int index1;
int index2;
char let;
char s1[50];
int onoff = 0;
printf("Enter a phrase:");
fgets(s1, sizeof(s1), stdin);
s1[strlen(s1)-1] = '\0';

for(index1=0; index1 < strlen(s1); index1++) {
	for(index2=index1+1; index2 < strlen(s1); index2++) {

		if (s1[index1] == s1[index2]&&onoff == 0) {
		
			printf("Not unique\n");
			onoff = 1;
			break;

		}

	}
}
if (onoff == 0) {
printf("Unique\n");
}
return 0;
}
