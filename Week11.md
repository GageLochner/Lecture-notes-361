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

