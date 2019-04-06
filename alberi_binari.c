#include<stdio.h>
#include<stdlib.h>


typedef struct nodo_albero_bin
{
int valore;
struct nodo_albero_bin *sx_p, *dx_p;
}nodo_albero_bin_t;


int inserisci_in_albero_bin_ric(nodo_albero_bin_t **radice_p,int valore)
{

	int inserito;

	nodo_albero_bin_t *nodo_p = NULL,*padre_p = NULL,*nuovo_p = NULL;


	for(nodo_p = padre_p = *radice_p;((nodo_p != NULL) && (nodo_p->valore != valore));padre_p = nodo_p, nodo_p = (valore < nodo_p->valore)? nodo_p->sx_p : nodo_p ->dx_p);


	if (nodo_p != NULL)
		inserito = 0;
	else
	{	
	  inserito = 1;

	  nuovo_p = (nodo_albero_bin_t *)malloc(sizeof(nodo_albero_bin_t));
      nuovo_p->valore = valore;
      nuovo_p->sx_p = nuovo_p->dx_p = NULL;

      if(nodo_p == *radice_p)
      	*radice_p = nuovo_p;
      else
       if(valore < padre_p->valore)
         padre_p->sx_p = nuovo_p;
      else
      	padre_p ->dx_p = nuovo_p;
	}
return(inserito);
	

}



int main()
{




	




}
