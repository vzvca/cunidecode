#ifndef __CUDEC_H__
#define __CUDEC_H__

/* -- init cudec - must be called before using other functions. Returns 0. */
extern int cudec_init ();

/* -- returns codepoint corresponding to utf-8 sequence starting at *s.
   -- advance s by the number of bytes taken by utf-8 sequence. */
extern int cudec_utf8tocp (char **s);

/* -- returns pointer to static area corresponding to ASCII translation
 * -- of codepoint cp. */
extern char *cudec_replcp (int cp);

/* -- uses combination of above function to translate text.
   -- src must be null terminated utf-8 string.
   -- dst must be able to hold translation.
   -- returns dst */
extern char *cudec_xlat (char *src, char *dst);

#endif
