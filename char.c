#include <stdio.h>

int main(){
    char ch[100];
    int i = 0,cpt = 0;

    printf("\nEntrez une suite de charactere : ");
    scanf("%s", &ch);
    
      while(ch[i] != '*' && ch[i] != '\0'){
        if(ch[i] == 'a' || ch[i] == 'A'){
            cpt++;
        }
        
        i++;
      }

      printf("\nLe nombre de lettres a dans %s est : %d", ch, cpt);

      return 0;
}