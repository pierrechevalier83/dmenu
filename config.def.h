/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Tamsyn:size=20"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *normbgcolor = "#073642"; /* -nb option; normal background                 */
static const char *normfgcolor = "#eee8d5"; /* -nf option; normal foreground                 */
static const char *selbgcolor  = "#268bd2"; /* -sb option; selected background               */
static const char *selfgcolor  = "#fdf6e3"; /* -sf option; selected foreground               */
static const char *outbgcolor  = "#073642";
static const char *outfgcolor  = "#eee8d5";
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
