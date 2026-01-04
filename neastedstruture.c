#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        char name[30];
        char tier;
    }pokemon;
    typedef struct legendarypokemon
    {
        pokemon normal;
        char ability[13];
    }legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=200;
    // mewtwo.normal.name="sarvam"; we can't declare like this directly.
    strcpy(mewtwo.normal.name,"pikachu");
    mewtwo.normal.tier='A';// we can declare single but not group of charaters.
    printf("%s %d %d %s %c",mewtwo.ability,mewtwo.normal.hp,mewtwo.normal.attack,mewtwo.normal.name,mewtwo.normal.tier);

    return 0;

}