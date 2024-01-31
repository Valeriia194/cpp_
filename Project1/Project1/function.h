#ifdef INTEGER
#define FillArray FillArrayInt
#define ShowArray ShowArrayInt
#elif defined(DOUBLE)
#define FillArray FillArrayDouble
#define ShowArray ShowArrayDouble
#elif defined(CHAR)
#define FillArray FillArrayChar
#define ShowArray ShowArrayChar
#endif

void FillArrayInt(int* array, int size);
void ShowArrayInt(int* array, int size);

void FillArrayDouble(double* array, int size);
void ShowArrayDouble(double* array, int size);

void FillArrayChar(char* array, int size);
void ShowArrayChar(char* array, int size);
