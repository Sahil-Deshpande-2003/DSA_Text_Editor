#define _DEFAULT_SOURCE
#define _BSD_SOURCE
#define _GNU_SOURCE
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <termios.h>
#include <time.h>
#include <unistd.h>

void enableRawMode();
void initEditor();
void editorOpen(char *filename);
void editorSetStatusMessage(const char *fmt, ...);
void editorRefreshScreen();
void editorProcessKeypress();
