#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;             /* corresponds to your 'i' */
    int value;
    struct node *next;
};

struct hash {
    size_t size;         /* number of buckets */
    struct node **buckets;
};

/* Create a hash table with given number of buckets */
struct hash *hash_create(size_t size) {
    if (size == 0) return NULL;
    struct hash *ht = malloc(sizeof(*ht));
    if (!ht) return NULL;
    ht->size = size;
    ht->buckets = calloc(size, sizeof(struct node *));
    if (!ht->buckets) {
        free(ht);
        return NULL;
    }
    return ht;
}

/* Simple hash function */
static size_t hash_index(struct hash *ht, int key) {
    return (size_t)(key >= 0 ? key : -key) % ht->size;
}

/* Insert (or update) key->value */
int hash_insert(struct hash *ht, int key, int value) {
    if (!ht) return 0;
    size_t idx = hash_index(ht, key);
    struct node *cur = ht->buckets[idx];
    while (cur) {
        if (cur->key == key) {
            cur->value = value; /* update */
            return 1;
        }
        cur = cur->next;
    }
    struct node *n = malloc(sizeof(*n));
    if (!n) return 0;
    n->key = key;
    n->value = value;
    n->next = ht->buckets[idx];
    ht->buckets[idx] = n;
    return 1;
}

/* Search for key; returns pointer to value or NULL if not found */
int *hash_search(struct hash *ht, int key) {
    if (!ht) return NULL;
    size_t idx = hash_index(ht, key);
    struct node *cur = ht->buckets[idx];
    while (cur) {
        if (cur->key == key) return &cur->value;
        cur = cur->next;
    }
    return NULL;
}

/* Remove a key; returns 1 if removed, 0 if not found */
int hash_remove(struct hash *ht, int key) {
    if (!ht) return 0;
    size_t idx = hash_index(ht, key);
    struct node *cur = ht->buckets[idx];
    struct node *prev = NULL;
    while (cur) {
        if (cur->key == key) {
            if (prev) prev->next = cur->next;
            else ht->buckets[idx] = cur->next;
            free(cur);
            return 1;
        }
        prev = cur;
        cur = cur->next;
    }
    return 0;
}

/* Free the whole table */
void hash_free(struct hash *ht) {
    if (!ht) return;
    for (size_t i = 0; i < ht->size; ++i) {
        struct node *cur = ht->buckets[i];
        while (cur) {
            struct node *tmp = cur;
            cur = cur->next;
            free(tmp);
        }
    }
    free(ht->buckets);
    free(ht);
}

int main(void) {
    struct hash *ht = hash_create(10);
    if (!ht) {
        fprintf(stderr, "Failed to create hash table\n");
        return 1;
    }

    hash_insert(ht, 5, 100);
    hash_insert(ht, 15, 200); /* collides with 5 when size==10 */
    hash_insert(ht, -3, 50);

    int *v;
    v = hash_search(ht, 5);
    if (v) printf("key 5 -> %d\n", *v);
    v = hash_search(ht, 15);
    if (v) printf("key 15 -> %d\n", *v);
    v = hash_search(ht, -3);
    if (v) printf("key -3 -> %d\n", *v);

    hash_remove(ht, 15);
    v = hash_search(ht, 15);
    if (!v) printf("key 15 not found after removal\n");

    hash_free(ht);
    return 0;
}
