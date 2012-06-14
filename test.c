
#include "src/commander.h"

int
main(int argc, const char **argv){
  command_t cmd;
  command_option(&cmd, "-V", "--version", "Display program version");
  command_option(&cmd, "-h", "--help", "Display help information");
  command_parse(&cmd, argc, argv);
  return 0;
}