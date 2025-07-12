/*This is the main command loop of the shell. It performs three basic functions
   1. READ command from stdin
   2. PARSE the command into program name and arguments
   3. EXECUTE the program with the correct arguments
*/

void command_loop(void){
   char *line;
   char ** args;
   int status;
   
   do {
      printf("> ");
      line = read_line()
      args = split_line();
      status = execute(args);

      free(line);
      free(args);
   } while (status);
}


#define RL_BUFSIZE 256
char * read_line(void){
   int bufsize = RL_BUFSIZE;
   int position = 0;
   char * buffer = malloc(sizeof(char) * bufsize);
}
