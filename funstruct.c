// #include<stdio.h>
// int main(){
//     typedef struct pokemon{ //local variable
//         int hp;
//         int attack;
//         char name[30];
//         char tier;
//     }pokemon;
//     pokemon p;
//     p.hp=100;
//     fun(p);//after completing of the int main the connection with fun will break. 
//     return 0;
// }
// void fun(pokemon sravan)
// {
//     printf("%d",sravan.hp);
//     return;
// }
#include<stdio.h>
typedef struct pokemon{ 
        int hp;
        int attack;
        char name[30];
        char tier;
    }pokemon;
    void fun(pokemon sravan);
    void change(pokemon* r);
    //void change(pokemon s);// structure are pass by values.using pointer we can change it.
int main(){
    pokemon p;
    p.hp=100;
    change(&p);
    printf("%d",p.hp);//the value p.hp has changed by pointer (pokemon* r).
    // change(p);
    fun(p);
    return 0;
}
void fun(pokemon sravan)
{
    printf("\n%d",sravan.hp);
    return;
}
void change(pokemon* r)
{
    (*r).hp=200;
}
// void change(pokemon s){
//     s.hp=200;
//     return s.hp;
// }

