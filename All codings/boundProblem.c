#include <stdio.h>
#include <stdlib.h>

const int MAX_WORD_SIZE = 51;

char oneBound[20] = {'4', '6', '9', '0', 'a', 'b', 'e', 'o', 'p', 'q', 'A', 'D', 'O', 'P', 'Q', 'R'};
char twoBound[5]  = {'B','8','g'};

int main() {
    char words[MAX_WORD_SIZE];
    int T;
  	scanf("%d" , &T);

    for(int t = 0 ; t < T; ++t) {
        int totalBounds=0;
      	int n;
      	scanf("%d", &n);

      	for(int i = 0 ; i < n ; ++i) {
        	scanf("%s" , words);

        	for(int i = 0 ; words[i]!='\0' ; i++) {

            for(int j=0; oneBound[j]!='\0'; j++) {
                if(words[i]==oneBound[j]) totalBounds = totalBounds + 1;
                }

            for(int k=0; twoBound[k]!='\0'; k++) {
                if(words[i]==twoBound[k]) totalBounds = totalBounds + 2;
                }
            }
        }
        printf("%d\n", totalBounds);
    }
  	return 0;
}
