#include "common_impl.h"

int creer_socket(int prop, int *port_num)
{
   int fd = 0;

   /* fonction de creation et d'attachement */
   /* d'une nouvelle socket */
   /* renvoie le numero de descripteur */
   /* et modifie le parametre port_num */

   return fd;
}

/* Vous pouvez ecrire ici toutes les fonctions */
/* qui pourraient etre utilisees par le lanceur */
/* et le processus intermediaire. N'oubliez pas */
/* de declarer le prototype de ces nouvelles */
/* fonctions dans common_impl.h */

int nb_machine(int fd){
int n=1, count=0;
char s;

while(n != 0){
  n=read(fd,&s,1);
  if(strncmp(&s,"\n",1) == 0){
    count ++;
  }
}
count --;
return count;
}

void fill_name_machine(int fd,char **machines){
  int n,i,j;
int num_machines=strlen(machines);

char s;
for(i=0;i<num_machines;i++){
  j=0;
  while(strncmp(&s,"\n",1) != 0){
    n=read(fd,&s,1);
    machines[i][j];
    j++;
  }
  printf("%s\n",machines[i]);

}
}
