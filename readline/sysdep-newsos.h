/* System-dependent stuff, for Sony NEwS systems */

#ifdef __GNUC__
#define alloca __builtin_alloca
#else
extern char *alloca ();
#endif

#include <sys/dir.h>
typedef struct direct dirent;
