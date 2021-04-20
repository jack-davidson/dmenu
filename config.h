/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static const char dracula_background[] = "#282a36";
static const char dracula_current_line[] = "#44475a";
static const char dracula_foreground[] = "#f8f8f2";
static const char dracula_comment[] = "#6272a4";
static const char dracula_cyan[] = "#8be9fd";
static const char dracula_green[] = "#50fa7b";
static const char dracula_orange[] = "#ffb86c";
static const char dracula_pink[] =  "#ff79c6";
static const char dracula_purple[] = "#bd93f9";
static const char dracula_red[] = "#ff5555";
static const char dracula_yellow[] = "#f1fa8c";

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { dracula_foreground, dracula_background },
	[SchemeSel] = { dracula_foreground, dracula_current_line },
	[SchemeSelHighlight] = { dracula_purple, dracula_current_line },
	[SchemeNormHighlight] = { dracula_purple, dracula_background },
	[SchemeOut] = { dracula_purple, dracula_current_line },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
