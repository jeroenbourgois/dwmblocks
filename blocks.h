//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "echo '^b#000000^^c#000000^'",      0,   0},
	{"", "sb-memory",	                       5,		0},
	{"", "sb-disk /",	                      30,		0},
	{"", "sb-disk ~/",	                    30,		0},
	{"", "sb-cpubars",	                     5,		0},
	{"", "sb-date",                          1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
