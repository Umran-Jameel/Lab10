#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

// create the Trie struct, it should have an int representing the number of occurrences of that word and an array of Tries for each next letter.

void insert(struct Trie **ppTrie, char *word);
int numberOfOccurances(struct Trie *pTrie, char *word);
struct Trie *deallocateTrie(struct Trie *pTrie);

int main(void) {
  char *pWords[] = {"notaword", "ucf", "no", "note", "corg"};

  // allocate memory to create a new Trie, use calloc
  // for each word in pWords
    // insert the word into the trie

  for (int i=0;i<5;i++) {
      printf("\t%s : %d\n",pWords[i], numberOfOccurances(trie, pWords[i]));
  }
  
  trie = deallocateTrie(trie);
  if (trie != NULL) {
    printf("There is an error in this program\n");
  }
  return 0;
}

void insert(struct Trie **ppTrie, char *word) {
  // make sure the trie is not null
  // for each letter in word
    // if the trie at the index of the letter in the array is null
      // allocate memory for that trie, use calloc
    // move the trie pointer to the trie at the index of the letter in the array
  // increment the integer to show that there is an occurrance of the word at this point
}

int numberOfOccurances(struct Trie *pTrie, char *word) {
  // make sure the trie is not null
  // for each letter in word
    // if the trie at the index of the letter in the array is null
      // return 0
    // move the trie pointer to the trie at the index of the letter in the array
  // return the int at that position
}

struct Trie *deallocateTrie(struct Trie *pTrie) {
  // if pTrie is NULL
    // return NULL
  // for each Trie in the array in pTrie
    // if the Trie is not null
      // recursively call deallocateTrie with that trie
  // free pTrie
}
