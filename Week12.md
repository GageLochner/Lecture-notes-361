# Week 12

## 3/27/2018

## Matrix of linear systems

Augmented matrix contains coefficients and constants of a equation.

Zeros will be in a predicable pattern. 

COO example from week 11 notes. 

COO is most easily stored in a struct. Nice for multiple matrixies too. 

## Can we do it better though?

You bet we can.

Some repetitive data is stored, and linearly searching for values is inefficinet. 

## Compressed Row format (CSR)

Attempts to eliminate redundant data in rows array.

Store number of items in each row instead of row index for each item.

Saves space if average nnz per row is > 1.

But this causes scanning to be very time expesive.

But what if we store the row offsets directly?

> row_offsets[i] == sum(row_counts[0:i-1])

Far more direct lookup as a result.

Advantages of sparse matrix, limits the length of row_offsets, and far more efficient value lookup.

Add one element to the end of row_offsets: The number of non zero entries in the matrix. 
This lets you calculate lenght of row i easily.
Need to store this value anyhow.

typedef struct csr
	int nrows
	int nnz
unsigned row_offests[nrows+1]
unsigned columns[nnz]
doulbe values[nnz]

How do we access this in a chache-efficient way. Can we do better in terms of cache preformance. When do we want to do better?

## Block Compressed Row (BSR)
 
CSR V COO: More efficients storage, faster lookups.

CSR V BSR: Focus on optimizing the performance of computation with matrices. Costs more space, but is better for cache lookups.

BSR works by finding "sub-matrices" of blocks of zeros. Very common in real work matrices.

Store non zero sub matrices "blocks" in CSR format. Then sub matrcies "blocks" of zeros are ignored.

Zero values are stored to keep block sizes equal. Not a size optimization, but a time optimization.


