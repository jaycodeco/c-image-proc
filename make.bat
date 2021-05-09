gcc -std=c11 -Wall -pedantic Image.c sepia.c -o sepia -lm

gcc -std=c11 -Wall -pedantic Image.c gray.c -o gray -lm

gcc -std=c11 -Wall -pedantic Image.c gray&sepia.c -o gray&sepia -lm