#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX_STR 255

//My fileSystem functions
int fs_mkdir(char*);
int fs_mkfile(char*);
int fs_rmdir(char*);
int fs_rmfile(char*);
int fs_lsdir(char*);
int fs_lssec(char*);
int fs_map();
int fs_tree();
int fs_help();
int fs_exit();

//Auxiliar functions

int main() {
  char command[MAX_STR];

  while(1) {
    fprintf(stdout, "->");
    fgets(command, sizeof(command), stdin);
    if (command[strlen(command)-1] == '\n')
      command[strlen(command)-1] = '\0';

    if (strcmp(command, "mkdir") == 0)
      fs_mkdir("");
    else if (strcmp(command, "mkfile") == 0)
      fs_mkfile("");
    else if (strcmp(command, "rmdir") == 0)
      fs_rmdir("");
    else if (strcmp(command, "rmfile") == 0)
      fs_rmfile("");
    else if (strcmp(command, "lsdir") == 0)
      fs_lsdir("");
    else if (strcmp(command, "lssec") == 0)
      fs_lssec("");
    else if (strcmp(command, "map") == 0)
      fs_map();
    else if (strcmp(command, "tree") == 0)
      fs_tree();
    else if (strcmp(command, "help") == 0)
      fs_help();
    else if (strcmp(command, "exit") == 0)
      fs_exit();
  }

  return 0;
}

int fs_mkdir(char* parameter) { fprintf(stderr, "mkdir: UNDER DEVELOPMENT\n"); }
int fs_mkfile(char* parameter) { fprintf(stderr, "mkfile: UNDER DEVELOPMENT\n"); }
int fs_rmdir(char* parameter) { fprintf(stderr, "rmdir: UNDER DEVELOPMENT\n"); }
int fs_rmfile(char* parameter) { fprintf(stderr, "rmfile: UNDER DEVELOPMENT\n"); }
int fs_lsdir(char* parameter) { fprintf(stderr, "lsdir: UNDER DEVELOPMENT\n"); }
int fs_lssec(char* parameter) { fprintf(stderr, "lssec: UNDER DEVELOPMENT\n"); }
int fs_map() { fprintf(stderr, "map: UNDER DEVELOPMENT\n"); }
int fs_tree() { fprintf(stderr, "tree: UNDER DEVELOPMENT\n"); }

int fs_help() { fprintf(stderr, "help: UNDER DEVELOPMENT\n"); }

int fs_exit() {
  exit(0);
}
