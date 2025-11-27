#include <stdio.h>
#include <string.h>
int main()
 {
  int score=0,i;
  char *q[]={"What is the capital of France?","How many days are there in a week?","Which animal is known as the King of the Jungle?","What do plants need to make food?","Which planet is closest to the Sun?","How many continents are there?","What is H\u2081\u2089O commonly known as?"};
  char *a[]={"Berlin"," 5"," Tiger", "Sunlight", "Venus", "5" ,"Salt" };
  char *b[]={"Paris"," 6"," Lion", "Salt", "Mars", "6" ,"Water" };
  char *c[]={"Madrid"," 7"," Elephant", "Sugar", "Earth", "7" ,"Oxygen" };
  char *d[]={"Rome","8"," Bear", "Sand", "Mercury", "8" ,"Hydrogen" };
  char *ans[]={"B","C","B", "A", "D", "C" ,"B" };
  char f[10];
  for(i=0;i<7;i++)
  {
      printf("\n%d. %s\nA.%s    B.%s    C.%s    D.%s ",i+1,q[i],a[i],b[i],c[i],d[i]);
      printf("\nenter your answer: ");
      scanf("%s",f);
      if(!strcmp(f, ans[i]))
      {
          printf("correct ans\n");
          score++;
      }
      else
      {
          printf("correct ans is: %s\n",ans[i]);
      }
  }
  printf("\nyour score is: %d/%d",score,i);

  return 0;
}
