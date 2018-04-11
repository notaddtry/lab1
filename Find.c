#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int line = 1;
  char *substring;
  int pos = 0;
  int found = 0;
  char temp[512];
  char *splitted;
  int word_index = 0;

  
  if(argc < 3 || argc > 3)
  {
    printf("Usage: %s <file> <string>\n", argv[0]);
    exit(1);
  }

 
  if(strstr(argv[1], ".txt") == NULL)
  {
    printf("Search can only be applied to txt files\n");
    return(0);
  }
  
  if((fp = fopen(argv[1], "r")) == NULL)
  {
    printf("Error\n");
    return(0);
  }

 
  while(fgets(temp, 512, fp) != NULL)
  {
    
    splitted = strtok(temp, " ");
    word_index = 0;

    
    while((splitted != NULL))
    {
      
      substring = strstr(splitted, argv[2]);

      if(substring != NULL)
      {
        pos = (strlen(temp) - strlen(substring)) + (word_index * (strlen(substring) + 1));
        printf("%d:%d %s\n", line, pos, argv[2]);
        found = 1;
      }

      splitted = strtok(NULL, " ");
      word_index++;
    }
    
    line++;
  }

  
  if(!found)
  {
    printf("No matches\n");
  }
  
  
  if(fp)
  {
    fclose(fp);
  }
  
  return(0);
}
