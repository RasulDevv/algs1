#include <stdio.h>
#include <stdlib.h>

struct computer{
    char name[16], processor[16];
    int ozu, memory;
};

void ozu_sort(struct computer s[], int ozuu, int len){
    for(int i=0; i<len; ++i){
        if(s[i].ozu == ozuu) printf("name: %s\nprocessor: %s\nozu: %d\nmemory: %d\n\n", 
        s[i].name, s[i].processor, s[i].ozu, s[i].memory);
    }
};

void memory_sort(struct computer s[], int mem, int len){
    for(int i=0; i<len; ++i){
        if(s[i].memory == mem) printf("name: %s\nprocessor: %s\nozu: %d\nmemory: %d\n\n", 
        s[i].name, s[i].processor, s[i].ozu, s[i].memory);  
    }
};

int main(){
    struct computer comps[] = {
        {"lenovo", "ryzen 3", 4, 128},
        {"HP", "intel i5", 8, 256},
        {"asus", "intel i3", 4, 1000},
        {"Macbook", "intel M1", 16, 1000}
    };
    memory_sort(comps, 1000, sizeof(comps)/sizeof(comps[0]));
    return 0;
}