//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"weather",	18000,	5},
	{"",	"disk",	        180,	5},
	{"",	"memory",	10,	14},
	{"",	"cpu",		10,	18},
	{"",	"volume",	0,	10},
	{"",	"internet",	5,	4},
	{"",	"clock",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
