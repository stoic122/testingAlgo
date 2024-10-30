#include <stdio.h>
#include <stdlib.h>

//explicitly defining to avoid constant
#define MAX_HEIGHT_TREE 100

//struct to contain node values and left and right childs
struct nodeData
{
    int data;
    unsigned freq;

    // defining left and right to reference other nodeData thereby creating binary tree
    struct nodeData *left, *right; 
};


int main()
{
   
    return 0;
}