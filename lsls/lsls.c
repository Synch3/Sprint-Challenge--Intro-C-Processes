#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
/**
 * Main
 */
int main(int argc, char **argv)
{
  struct dirent *entry;
  DIR *dir;
  struct stat buf;
  if (argc < 2){
    dir = opendir(".");
  }
  else{

    dir = opendir(argv[1]);
  }
  char path[] = "./";
  while ((entry = readdir(dir)) != NULL)
  {
    char *cpy = strdup(path);
    strcat(cpy, entry->d_name);
    stat(cpy, &buf);
    printf("%11ld %s\n", buf.st_size, entry->d_name);
  }
  closedir(dir);
  return 0;
}