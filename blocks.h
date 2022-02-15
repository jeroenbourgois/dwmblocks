//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "sb-memory",	                    30,		0},
	{"", "sb-disk /",	                      30,		0},
	{"", "sb-disk ~/",	                    30,		0},
	{"", "sb-cpubars",	                     5,		0},
	{"", "date '+%Y %b %d (%a) %I:%M%p'",    5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
