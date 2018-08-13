#ifdef _DEBUG
#define DEBUG
#endif

#ifdef MEMDLEAK
#undef MEMDLEAK
#endif

#ifdef __APPLE__
#define MEMDLEAK 0
#else
#define MEMDLEAK 1
#endif
#define PREFER_MALLOC 0
#define BOUNDS_CHECK 0



