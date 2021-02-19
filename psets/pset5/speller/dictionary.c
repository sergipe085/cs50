// Implements a dictionary's functionality

#include <stdbool.h>

#include "dictionary.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 100000;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    //set the hash_value
    int hash_value = hash(word);
    if (table[hash_value] == NULL)
    {
        return false;
    }
    else
    {
        //create a node equal to table node with hash index
        node *p = table[hash_value];

        while (p != NULL && strcmp(word, p->word) == 0)
        {
            return true;
        }
        p = p->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    //get the length of word
    int length = strlen(word);
    unsigned int hash_value = 0;
    for (int i = 0; i < length; i++)
    {
        //calculate the hash value
        hash_value += tolower(word[i]);
        hash_value = hash_value * tolower(word[i]) % N;
    }
    return hash_value;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    //open the dictionary file
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        return false;
    }

    //buffer of the word of dictionary
    char buffer[LENGTH + 1];

    //while the end of dictionary (EOF = end of file)
    while (fscanf(file, "%s", buffer) != EOF)
    {
        //creating a temp node
        node *tmp = malloc(sizeof(node));
        if (tmp == NULL)
        {
            return false;
        }
        //setting the next node of temp node to null
        tmp->next = NULL;

        //copying the buffer value to temp node word
        strcpy(tmp->word, buffer);

        //picking the hashcode
        int hashCode = hash(tmp->word);

        //if table node of hashcode is null set this table node to temp node
        if (table[hashCode] == NULL)
        {
            table[hashCode] = tmp;
        }
        else
        {
            //if not null put the temp node to table
            tmp->next = table[hashCode];
            table[hashCode] = tmp;
        }
    }

    //close dictionary
    fclose(file);

    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        //if table index isnt null word + 1
        node *p = table[i];
        if (p != NULL)
        {
            p = p->next;
            count++;
        }
    }
    return count;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        //set temp nodes
        node *temp2;
        temp2 = table[i];
        node *temp1;
        temp1 = table[i];

        while (temp2 != NULL)
        {
            //set tmp1 to tmp 2 and tmp to tmp2->next and free tmp1
            temp1 = temp2;
            temp2 = temp2->next;
            free(temp1);
        }
    }
    return true;
}
