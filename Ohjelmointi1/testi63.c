#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINES 10000
#define MAXCHARSPERLINE 200

int nlines = 0;
char line[MAXLINES][MAXCHARSPERLINE];

int ReadLines(char *filename)
{
    FILE *f;
    int n;
    filename = "testi.txt";
    char buf[MAXCHARSPERLINE];
    if ((f = fopen(filename, "r")) == NULL)
        return fprintf(stderr, "%s: can't open for reading\n", filename), -1;
    for (nlines = 0; fgets(buf, MAXCHARSPERLINE, f) != NULL; nlines++)
    {
        // check the length and kill the annoying newlines
        n = strlen(buf);
        if (n <= 0 || buf[n - 1] != '\n')
            return fprintf(stderr, "%s:%d read partial line, increase MAXCHARSPERLINE\n", filename, nlines + 1), -1;

        buf[n - 1] = '\0';
        
        if (nlines >= MAXLINES)
            return fprintf(stderr, "%s:%d increase MAXLINES\n", filename, nlines + 1), -1;
        strcpy(line[nlines], buf);
    }
    fclose(f);
    return nlines;
}

main()
{
    int x = 0;
    int i;
    if (ReadLines("rl.c") < 0)
        exit(1);
    for (i = 0; i < nlines; i++)
        printf("%d: %s\n", i + 1, line[i]);
    x = strlen(nlines);
    printf("TULOS %d", x);
    return 0;
}