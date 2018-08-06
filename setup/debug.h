#ifdef _DEBUG
#define DEBUG
#endif

#ifdef MEMDLEAK
#undef MEMDLEAK
#endif

#define MEMDLEAK 1
#define PREFER_MALLOC 0
#define BOUNDS_CHECK 0



