#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * file;
    char path[100];
    char ch;
    int characters, words, lines;
    file = fopen("counting.txt","w");
    printf("enter the text.press cntrl Z:\n");
    while((ch = getchar()) != EOF)
        putc(ch,file);
    fclose(file);
    printf("Enter source file path: ");
    scanf("%s", path);
    file = fopen(path, "r");
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(EXIT_FAILURE);
    }
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
        if (ch == '\n' || ch == '\0')
            lines++;
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }
    if (characters > 0)
    {
        words++;
        lines++;
    }
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words = %d\n", words);
    printf("Total lines = %d\n", lines);
    fclose(file);
}