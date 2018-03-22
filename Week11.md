# Week 11

## The Matrix

### Not that matrix :(

Remember complexity 

Memory is laid out linearly. So is the matrix as it is put into memory.

Cache levels. 

## Micro processor blocks

Lots of small instruction blocks, all along internal bus.

Bus is very important. Pipeline of things, in order as needed.

## Memory ops

Reading: Address, read signal, data

Writing: Address, data, write signal

In general, speed and cost and inversly related to size. 

## Memory opimization

Design to have enough speed and capacity, with minimum cost.

ROM : read only memory

Permament, includes EEPROM / Flash / bios

RWM : read write memory

Aka ram ( COntents erased when power is disconnected.

Permanent storage : hdd, ssd, cd-rom...

## Locality

Temporal: Recently referenced items, likely to be reused. Ex: i used as a counter for a loop.

Spacial: Items with nearby addresses tend to be referenced at similar times, sometimes sequentially. Ex: Accessing array elements

> C is very linear. May also be further optimized by gcc.

## Thurs

Cache hit: Item is found in L3 or closer to CPU.

Cache miss: Item not found, must be pulled from RAM or slower storage.

Cache replacement policies:
Randon, Least Recently Used, Least Frequently Used, First In First Out

Cache read ops: Receive adress, check if already in cache, pull block from storage as needed, use cache.

Average memory access time = Hit time + Miss rate * Miss penalty

Miss types: Compulsory, Capacity, Conflict.

Comp: 1st access to a block

Cap: Cache is full, need more data, must boot some data

Conf: Can't store all needed data in Cache

Cache miss can take 100 clock cycles, compared to 1 cc for a hit. 

## Matrices

### Dense matrix

Storing the entire matrix, for a 1M by 1M matrix of doubles, that's 8 TB of data.

Can enclose a matrix in a struct.

### Sparce matrices

Contains more 0's than non-0's. (Identity matrices)(PDE)(Finite Element Models)(Linear Algebraic Equations)

#### Coordinate Format (COO)

Rows array, Columns array, Values array.

For every non-zero value in the matrix, there is an entry at the index I in rows array, columns array, and values array that stores the value. 

Ex: [1,2],[0,4]

rows: 0,0,1
colums: 0,1,1
value: 1,2,4

Reads as "At row 0, column 0, value of 1. At row 0, column 1, value of 2. At row 1, column 1, value of 4."

Nothing is stored at 1,0, so it is implicity a 0.

Storage size example:

5% non-zero values. 800 gb for a 1M by 1M matrix. 90% storage size savings.

Note that this is not linear with the amount of non-zero values. 

Effective if sparsity < size per value in dense (original) / size per value in COO

nnz is short for non-zero numbers.

#### Compressed Row (CSR)

We want to store number of zeros in the row array. Everything else stays the same. 
