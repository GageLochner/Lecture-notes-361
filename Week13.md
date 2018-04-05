# Week 13 notes

## Lab 12 is a group lab

Pair up.

Git pull first.

Work on outline, then work together.

Name things the same, ect ect.

One report for the pair, one repo, one chunk of code

Merge conflict, read error carefully.

Partner : rrydberg@iastate.edu - Robert

Unsaved local files may be written over. 

## Matrix storage 

### COO algorythm 

`typedef struct matrix {`

Write functino for test case first.

You can always comment out code.

Initialize matrix in main. 

Use `srand(time(0));` to generate random numbers. Include time.h

` r = rand()%100; // r is a random number less than 100`

Assorted code for random number generator into test matrix. Uses time intervals to find zero values, but also total number of nnz to get desired matrices. 

Also uses struct to define the matrix. 

## Thursday

To initialize the dense matrix, pass (M,N, denseMatrix, &coo_matrix)

int n;
int m;
int running nnz;

for all m,n; Nested for loops.

If value == zero, {continue;} // step through this loop iteration

Else, store nnz; 

cooMatrix -> rows[running nnz] = m;
cooMatrix -> columns[running nnz] = n;
cooMatrix -> values[running nnz] = densematrix[m][n];
running nnz ++;


store to struct that was declared in main.

void coofindvalue (int row, int col, struct cooMatrix *coomatrix)

int i, int result;

for(i=0, i<cooMatrix->nnz; i++){

printf(value found at row and column)

if rows[i] == row, %% col[i] = col,

result = values[i];
break;

else value = 0;

## CSR

typedef csrmatrix

int Nrows
int nnz
unsigned int *row_offsets = malloc m+1
unsigned int *columns = malloc nnz
unsigned int *values = malloc nnz

struct csrmatrix csrmatrix

More stuff and things and such


