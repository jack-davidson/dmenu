/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;
static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"monospace:size=10"};



static const char bg0[]     = "#282828";
static const char bg1[]    = "#3c3836";

static const char fg0[]     = "#ebdbb2";
static const char fg1[]     = "#d79921";

static const char *colors[SchemeLast][2] = {
	/*                        fg   bg  */
	[SchemeNorm]          = { fg0, bg0 },
	[SchemeSel]           = { fg0, bg1 },
	[SchemeNormHighlight] = { fg1, bg0 },
	[SchemeSelHighlight]  = { fg1, bg1 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
