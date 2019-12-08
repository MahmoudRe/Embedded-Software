#include <stddef.h>
#include <string.h>

typedef struct Bucket {
    struct Bucket *next;
    char *key;
    void *data;
} Bucket;

typedef struct HashMap {
    int size;
    Bucket **buckets;
} HashMap;

typedef void *(*ResolveCollisionCallback)(void *old_data, void *new_data);

typedef void (*CallBack)(const char *key, void *data);

typedef void (*DestroyDataCallback)(void *data);


/**
 * sum up the ascii chars and divide by the number of indexes we have.  the remainder of the op is the hash of the string.
 * @param string
 * @return
 */
unsigned int hash(const char *string);

HashMap *create_hashmap(size_t key_space);

void insert_data(HashMap *hm, char *key, void *data, ResolveCollisionCallback resolve_collision);

void *get_data(HashMap *hm, char *key);

void remove_data(HashMap *hm, char *key, DestroyDataCallback destroy_data);

void delete_hashmap(HashMap *hm, DestroyDataCallback destroy_data);


size_t mystrlen(const char *str) {
    return strlen(str) + 1;
}

HashMap *create_hashmap(size_t key_space) {

    HashMap *hm = (HashMap *) malloc(key_space * sizeof(Bucket *));
    Bucket *bucket = (Bucket *) malloc(key_space * sizeof(Bucket));
    hm->size = key_space;
    hm->buckets = bucket;

}

unsigned int hash(const char *string) {
    int i = 0;
    unsigned int hash = 0;
    while (string[i] != '\0') {
        hash += string[i];
        i++;
    }
    return hash;
}


void insert_data(HashMap *hm, char *key, void *data, ResolveCollisionCallback resolve_collision) {

    unsigned int i = (hm->size % hash(key));

    if (hm->buckets[i] == NULL) {


        Bucket *bucket = (Bucket *) malloc(sizeof(Bucket));

        bucket->data = data;

        int keylen = mystrlen(key);

        char *k = (char *) malloc(keylen * sizeof(char));

        strcpy(k, key);

        bucket->key = k;

        bucket->next = NULL;

        hm->buckets[i] = bucket;

    } else {

        Bucket *current = hm->buckets[i];

        while (current != NULL) {
            if (strcmp(key, current->key) != 0) {
                current = current->next;
            } else {
                current->data = resolve_collision(current->data, data);
                return;
            }
        }


        Bucket *bucket = (Bucket *) malloc(sizeof(Bucket));
        bucket->data = data;

        int keylen = mystrlen(key);

        char *k = (char *) malloc(keylen * sizeof(char));

        strcpy(k, key);

        bucket->key = k;

        bucket->next = hm->buckets[i];

        hm->buckets = bucket;


    }

}

void iterate(HashMap *hm, CallBack callBack) {
    unsigned int size = hm->size;

    int i = 0;
    while (i < size) {
        if (hm->buckets[i] != NULL) {
            Bucket *current = hm->buckets[i];
            while (current != NULL) {
                callBack(current->key, current->data);
                current = current->next;
            }
        }

        i++;
    }
}

void *get_data(HashMap *hm, char *key) {

    unsigned int i = hm->size % hash(key);
    if (*key == NULL || hm->buckets[i] == NULL) {
        return NULL;
    } else {
        Bucket *current = hm->buckets[i];

        while (current != NULL) {
            if (strcmp(key, current->key) == 0) {
                return current->data;
            }
            current = current->next;
        }
    }

}

void remove_data(HashMap *hm, char *key, DestroyDataCallback destroy_data) {

    if (key != NULL) {

        unsigned int i = (hm->size % hash(key));
        Bucket *current = hm->buckets[i];
        Bucket *prev = hm->buckets[i];

        int c = 0;

        while (current != NULL) {

            if (strcmp(key, current->key) == 0) {
                if (destroy_data != NULL) {
                    destroy_data(current->data);
                }
                if (c == 0) {
                    hm->buckets[i] = current->next;
                    free(current);
                    break;
                } else {

                    prev->next = current->next;
                    free(current);
                    break;
                }

            } else {
                if (c != 0) {
                    prev = current;
                }
                current = current->next;
                c = 1;
            }
        }

    }

}

void freeBucket(Bucket *bucket, DestroyDataCallback destroy_data) {
    if (bucket->next == NULL) {

        if (destroy_data != NULL) {
            destroy_data(bucket->data);
        }

        //maybe not needed?
        bucket == NULL;

        free(bucket);
        return;
    }
    freeBucket(bucket->next , destroy_data);
}

void delete_hashmap(HashMap *hm, DestroyDataCallback destroy_data) {
    if (hm != NULL) {
        int size = hm->size;
        int i = 0;

        Bucket *current;
        while (i < size) {
            current = hm->buckets[i];
            if (current != NULL) {
                freeBucket(current, destroy_data);
            }
            i++;
        }
        free(hm->buckets);
        free(hm);
    }


}