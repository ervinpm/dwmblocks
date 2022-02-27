//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"^c#98C379^  ", "echo $(grep \"^\\s*w\" /proc/net/wireless | awk '{ print int($3 * 100 / 70) \"%\" }')^d^",					5,		0},
	{"^c#E06C75^ ", "echo $(cat /sys/class/power_supply/BAT1/capacity)%^d^",					30,		0},
	{"^c#E5C07B^墳 ", "echo $(amixer get Master | tail -n1 | awk -F '[][]' '{print $2}')^d^",	30,		30},
	{"^c#C678DD^ﯧ ", "echo $(xbacklight | awk -F '.' '{print $1}')%^d^",	0,		11},
	{"^c#56B6C2^ ", "echo $(free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g)^d^",	    30,		0},

	{"^c#61AFEF^ ", "echo $(date '+%b %d %H:%M')^d^",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
