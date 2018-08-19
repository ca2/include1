#ifdef _DEBUG
#define DEBUG
#endif

#ifdef MEMDLEAK
#undef MEMDLEAK
#endif

#ifdef __APPLE__
#define MEMDLEAK 0
#else
#define MEMDLEAK 0
#endif
#define PREFER_MALLOC 1
#define BOUNDS_CHECK 0



