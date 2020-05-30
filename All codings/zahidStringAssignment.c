#include <stdio.h> // Main header
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void find_text(char* source, char* sub_string) {

    int l, i, j;

    // Counting sub-string length
    for (l = 0; sub_string[l] != '\0'; l++);


    // For each letter in source we are going through a loop
    for (i = 0, j = 0; source[i] != '\0' && sub_string[j] != '\0'; i++)
    {
        if (source[i] == sub_string[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        printf("%d", i - j + 1);
    }
    else
    {
        printf("Substring not found");
    }


}


char* delete_text(char* source, char* stringtoDelete)  {

    char *p, *q, *r;
    // strstr is used to find substring from a string
    if ((q = r = strstr(source, stringtoDelete)) != NULL) {
        size_t len = strlen(stringtoDelete);
        while ((r = strstr(p = r + len, stringtoDelete)) != NULL) {
            // Using the len we extracted, we shift the index of string to delete the word
            while (p < r)
                *q++ = *p++;
        }
        while ((*q++ = *p++) != '\0') continue;
    }

    //returning string back to main()
    return source;
}

void insert_text(char* source, const char* to_insert, int index)  {

    int i=0;
    int t=0;
    int x,g,s,o;
    // several declarations to use

    // p equals index value of the insertable place
    int p = index;

    int c[100];
    int r = strlen(source); // main word length
    int n = strlen(to_insert); // inserted word length

	while(i <= r)
	{
		c[i]=source[i]; // cloning source
		i++;
	}
	s = n+r; // main string + sub-string length
	o = p+n; // index + sub-string length

	for(i=p;i<s;i++) // from index to total length
	{
		x = c[i];

		if(t<n)
		{
			// Checking condition and Inserting character
			source[i] = to_insert[t];
			t=t+1;
		}
		source[o]=x;
		o=o+1;
	}


    printf("New Source : %s", source);
}

void  remove_vowels(char* source) {

    int len = strlen(source); // Length of string

	for(int i=0; i<len; i++)
	{
		if(source[i]=='a' || source[i]=='e' || source[i]=='i' ||
		source[i]=='o' || source[i]=='u' || source[i]=='A' ||
		source[i]=='E' || source[i]=='I' || source[i]=='O' ||
		source[i]=='U')
		{
			for(int j=i; j<len; j++)
			{
			    // If the letter is vowel, delete and update
				source[j]=source[j+1];
			}
		len--;
		}
	}

    printf("New Source : %s", source);

}

void  tokenize(const char* source, const char* delims) {
    int count = 0, flag = 0, def = 1;
    for(int i = 0 ; source[i] != '\0'; i++) { // For each letter in the string
        if(def == 1) { // Condition for output satisfaction
            printf("\nToken %d : ", count++);
            def = 0;
        }
        // Checking for Delimiter
        if(source[i] == *delims && i != 0) { printf("\n"); flag = 1; }
        // Token is printed only for new line
        if(flag == 1) { printf("\nToken %d : ", count++); flag = 0; }
        printf("%c", source[i]);
    }
}


int main(void) {
    // Several variables used in the main()
    char str[500];
    char delimiter[10];
    char insertString[20];
    char stringToDelete[20];
    int  position;
    char findStr[20];

    printf("\nEnter the source string:\n> ");
    //scanf("%[^\n]%*c", str); --> use for other compilers
    gets(str); // --> for CodeBlocks Compiler, this is best

    char choice = '\0';

    while(1) {

        printf("\nEnter D(Delete), I(Insert), F(Find), T(Tokenize), V(Vowel Removal) or Q(Quit) > ");

        scanf("%c", &choice);

        switch(choice) {

        case 'D':
        printf("\nString to delete> ");
        scanf("%s", stringToDelete);
        printf("New Source: %s", delete_text(str, stringToDelete));
        choice = '\0';
        break;

        case 'I':
        printf("\nString to insert> ");
        scanf("%s", insertString);
        printf("\nPosition of insertion> ");
        scanf("%d", &position);
        insert_text(str, insertString, position-1);
        choice = '\0';
        break;

        case 'F':
        printf("\nString to find> ");
        scanf("%s", findStr);
        printf("\'%s\' found at position ", findStr);
        find_text(str, findStr);
        choice = '\0';
        break;

        case 'T':
        printf("\nSelect a delimiter> ");
        scanf("%s", delimiter);
        tokenize(str, delimiter);
        choice = '\0';
        break;

        case 'V':
        remove_vowels(str);
        choice = '\0';
        break;

        case 'Q':
        exit(0);
        break;

        default:
        choice = '\0';
        break;

        }
    }
}
