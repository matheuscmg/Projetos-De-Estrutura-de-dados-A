#include <iostream>
#include <time.h>

usando namespace std;

estrutura não
{
    codigo int;
    struct no * prox;
    struct tm * timeinfo;
};

void insere (não ** inicio, não ** fim)
{
    não * aux;
    aux = (no *) malloc (sizeof (no));

    time_t currentTime, atual;
    struct tm * timeinfo;
    currentTime = time (NULL);
    timeinfo = localtime (& currentTime);
    cout << "\ nHorario de Inicio:" << timeinfo-> tm_hour;
    cout << "" << timeinfo-> tm_min;
    cout << "" << timeinfo-> tm_sec << endl;

    if (aux! = NULL)
    {
        cout << "\ nDigite um numero para o inserir na FILA:";
        cin >> aux-> codigo;
        aux-> prox = NULL;
    }
    if ((* inicio) == NULL) {

        (* inicio) = aux;
        (* fim) = aux;
    }
    outro{
        (* fim) -> prox = aux;
        (* fim) = aux;
    }
    cout << "\ n";

}

removedor de void (não * * inicio)
{
  não * aux;

  time_t currentTime, atual;
  struct tm * timeinfo;
  currentTime = time (NULL);
  timeinfo = localtime (& currentTime);
  cout << "\ nHorario de Remocao:" << timeinfo-> tm_hour;
  cout << "" << timeinfo-> tm_min;
  cout << "" << timeinfo-> tm_sec << endl;

  atual = tempo (NULL);
  cout << "\ nTempo de execucao:" << (difftime (currentTime, atual));


  if (* inicio == NULL) {
    cout << "Fila Vazia" << endl;
  }
    outro
{
      cout << "\ nRemovendo o inicio da lista \ n" << endl;
      aux = (* inicio);
      (*inicio)=(*inicio)->prox;
      free(aux);
    }
}


void imprimir(no* inicio)
{
    no *aux;
    aux=inicio;
    while(aux!=NULL)
    {
        cout <<aux->codigo << " ";
        aux = aux -> prox;
    }
    cout << "\n";
}

void cabechalo(){
  cout << "         ######## ########        ##" << endl;
  cout << "         #        #       #      #  #" << endl;
  cout << "         #        #       #     #    #" << endl;
  cout << "         ######## #       #    ########" << endl;
  cout << "         #        #       #   #        #" << endl;
  cout << "         #        #       #  #          #" << endl;
  cout << "         ######## ########  #            #" << endl;
  cout << "-------------------------------------------------"<< endl;
  cout << "       ######## ##### #             ##"<< endl;
  cout << "       #          #   #            #  #"<< endl;
  cout << "       #          #   #           #    #"<< endl;
  cout << "       #######    #   #          ########"<< endl;
  cout << "       #          #   #         #        #"<< endl;
  cout << "       #          #   #        #          #"<< endl;
  cout << "       #        ##### ####### #            #"<< endl;
  cout << "-------------------------------------------------"<< endl;  
  cout << "Matheus das Neves Camargo "<< endl;
  cout << "-------------------------------------------------"<< endl;
  cout << "Opcionais Funcionando: " << endl;
  cout << "1- " << endl;
  cout << "-------------------------------------------------"<< endl;
  
}

int main()
{
  char entrar;
  int escolha;

  no *inicio =NULL;
  no *fim = NULL;
  
  time_t currentTime, atual;
  struct tm *timeinfo;
  currentTime = time(NULL);
  timeinfo = localtime(&currentTime);

  cabechalo();

  cout << "\nVocE gostaria de entrar no sistema? S ou N: ";
  cin >> entrar;
  entrar = toupper(entrar);

  if (entrar == 'N' || entrar != 'S'){
     return 0;
   }
   else{
      system("cls");
    do
    {
        cout << "Digite 1 para INSERIR";
        cout << "\ nDigite 2 para REMOVER";
        cout << "\ nDígito 3 para IMPRIMIR";
        cout << "\ nDigite 0 finalizar";
        cout << "\ nInforme sua opcao:";
        cout << "olá meus amigos ***";
        cin >> escolha;

        mudar (escolha)
        {
        caso 1:
            dentro (& inicio, & fim);
            pausa;
        caso 2:
            removedor (& inicio);
            pausa;
        caso 3:
            imprimir (inicio);
            pausa;
        }
    } enquanto (escolha! = 0);
   }
return 0;
 }