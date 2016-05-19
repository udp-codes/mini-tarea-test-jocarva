#include <iostream>
class Nodo{
	int data;
	Nodo *izq;
	Nodo *der;
};

class abb{
	Nodo *raiz;

	abb(){
		raiz = NULL;
	}

	void insertar(Nodo *nuevo){
		insertarR(nuevo,raiz);
	}

	void insertarR(Nodo *nuevo, Nodo *p){
		if(p == NULL){
			p = nuevo;
			return;	
		} 
		if(nuevo->data > p->data){
			insertarR(nuevo,p->der);
		}
		if(nuevo->data < p->izq){
			insertarR(nuevo,p->izq);
		}
	}
    
    void recorre(nodo *p){
		if (p!=NULL){
			recorre (p->izq);
			return p->raiz;
			recorre (p->der);
	}
   }
   void buscar(nodo *p, int x){
	   while (p!=NULL){
		  if (p->data==x){
			  return p; }
		if (p->raiz<x){
			p=p->der;
		}	
		if (p->raiz>x)  {
			p=p->izq;
		}
	    }
	    return p;
	    }
   void *buscarR(nodo *p, int valor){
	   while(p!=NULL){
	   if (p->raiz==valor){
		   return p;
		   }
	   if (p->raiz<valor){
		   p= uscarR(p->right,valor);
		   }else{
		   p= buscarR(p->left,valor);
	       }else{
			   return p;
	   }
}
}
  nodo *BuscaMinimo (nodo *p){
	  while (p!=NULL){
		  if(p->izq==NULL){
			  return p;
		  }else{
			  p=p->izq;
		  }  
	  }
	  return p;
  }
  nodo *MenorDescendiente (nodo *p){
	  if(p==NULL){
		  return p;
	  }
	  if(p->der==NULL){
		  return NULL; 
	  }
	  return (BuscaMinimo(p->der));
  }
   void eliminar(nodo *p, int valor){
	   nodo *aux;
	   if(p==NULL){
		   return NULL;
	   }else{
		   if(valor< p->raiz)
		   p->izq= eliminar(p->izq,valor);
	   }else{
	       if(valor> p->raiz)
	       p->der= eliminar(p->der, valor);
	   }else{
		   if(p->izq && p->der){ //dos hijos
			   aux=MenorDescendiente(p->der);
			   p->raiz= aux->raiz;
			   p->der= eliminar(p->der,aux->raiz);   
		   }else{
			   aux= p;
			   if(p->izq==NULL)//solo un hijo derecho, o ninguno
			   p=p->der;
		       }else{
			   if (p->der==NULL)//solo un hijo izquierda o ninguno
			   p=p->izq;
		       }
	   } 
	  return p;
   }
   }

}
