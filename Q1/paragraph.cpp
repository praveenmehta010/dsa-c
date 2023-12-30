#include <stdio.h>
int main() {
char text[100];
int PAR[100];
int paragraphCount = 0;
printf("Enter the text with at least two paragraphs. To end input, enter an empty line:\n");
int i = 0;
while (1) {
char c = getchar();
if (c == '\n') {
text[i] = '\0';
PAR[paragraphCount] = i;
paragraphCount++;
i = 0;
} else if (c == EOF || c == '\0') {
break;
} else {
text[i] = c;
i++;
}
}
if (paragraphCount < 2) {
printf("Please enter at least two paragraphs to construct the array PAR.\n");
return 1;
}
printf("Locations of the first paragraphs in the text:\n");
for (int j = 0; j < paragraphCount; j++) {
printf("Paragraph %d starts at position %d\n", j + 1, PAR[j]);
}
return 0;
}