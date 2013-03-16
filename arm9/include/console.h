#include <stdarg.h>

extern bool consoleDebugOutput;

void initConsole();
void printConsoleMessage(char *s);
void enterConsole();
void exitConsole();
bool isConsoleEnabled();
int displayConsole();
void addToLog(const char *format, va_list args);
