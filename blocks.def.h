//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ", "echo $(cat /sys/class/power_supply/BAT1/capacity)%",					30,		0},
	{"墳 ", "amixer get Master | tail -n1 | awk -F '[][]' '{print $2}'",	30,		30},
	{"ﯧ ", "xbacklight | awk -F '.' '{print $1 \"%\"}'",	0,		11},
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	    30,		0},

	{"", "date '+%b %d %H:%M'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
