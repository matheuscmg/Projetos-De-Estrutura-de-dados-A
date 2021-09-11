#include <iostream>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct NO {
	char nome[20], raca[20], especie[20];
	char sexo[2], cor[15], porte[15];
	int idade, id;
	struct NO *prox;
};
void cabecalho() {

  cout << "\n   ######                       #     #                                     ╭━━╮━━┳";
  cout << "\n   #     #  ######  #    #      #     #  #  #    #  #####    ####   ╭╮╭━━━━━┫┃▋ ▋┣";
  cout << "\n   #     #  #       ##  ##      #     #  #  ##   #  #    #  #    #  ┃╰┫┈┈┈┈┈┃┃┈┈╰┫ ";
  cout << "\n   ######   #####   # ## #      #     #  #  # #  #  #    #  #    #  ╰━┫┈┈┈┈┈╰╯╰┳━╯ ";
  cout << "\n   #     #  #       #    #       #   #   #  #  # #  #    #  #    #    ┃┏┳┳━━┓┏┳┫   ";
  cout << "\n   #     #  #       #    #        # #    #  #   ##  #    #  #    #  ━━┗┛┗┛━━┗┛┗┛━━ ";
  cout << "\n   ######   ######  #    #         #     #  #    #  #####    ####   \n";
  
 cout << "\n         ╭━━╮━━┳    #                 ######                                                 ";
 cout << "\n ╭╮╭━━━━━┫┃▋ ▋┣    # #     ####       #     #  ######  #####   ####   #    #   ####   #####  ";
 cout << "\n ┃╰┫┈┈┈┈┈┃┃┈┈╰┫   #   #   #    #      #     #  #         #    #       #    #  #    #  #    # ";
 cout << "\n ╰━┫┈┈┈┈┈╰╯╰┳━╯  #     #  #    #      ######   #####     #     ####   ######  #    #  #    # ";
 cout << "\n    ┃┏┳┳━━┓┏┳┫   #######  #    #      #        #         #         #  #    #  #    #  #####  ";
 cout << "\n  ━━┗┛┗┛━━┗┛┗┛━━ #     #  #    #      #        #         #    #    #  #    #  #    #  #      ";
 cout << "\n                 #     #   ####       #        ######    #     ####   #    #   ####   #      ";
 cout<< "\n\n\n *-*-* FEITO POR MATHEUS DAS NEVES CAMARGO RA:20156311 *-*-*";
 cout << "\n\n";


}
// adiciona animal
void adicionarpet(NO **lista, int *id) {
	(*id) = (*id) + 1;
  NO *aux;
	aux = (NO *)malloc(sizeof(NO));
  FILE *arq;
    
    cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		cout << " \n *                    ADICIONE UM ANIMAL                       *";
		cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";

	
	if (aux != NULL) {
		
		cout << "\n\n Informe o Nome do Animal:";
		cin.ignore();
		cin.getline(aux->nome, 20);
		cout << "\n Informe a Raca do Animal:";
		cin.getline(aux->raca, 20);
		cout << "\n Informe a Especie do Animal:";
		cin.getline(aux->especie, 20);
		cout << "\n Informe o Sexo do Animal(F ou M):";
		cin.getline(aux->sexo, 2);
		cout << "\n Informe a Cor do Animal:";
		cin.getline(aux->cor, 15);
		cout << "\n Informe o Porte do Animal(pequeno, medio, grande):";
		cin.getline(aux->porte, 15);
		cout << "\n Informe a Idade do Animal:";
		cin >> aux->idade;

		aux->id = *id;
		aux->prox = *lista;
		*lista = aux;

    cout <<"\n informacoes sendo gravadas no arquivo..."<<endl;
        arq = fopen("Entrada.txt", "a");
        fprintf(arq,"Nome: " "%s", aux->nome);
        fprintf(arq,"  Raca: " "%s", aux->raca);
        fprintf(arq,"  Especie: " "%s", aux->especie);
        fprintf(arq,"  Sexo: " "%s", aux->sexo);
        fprintf(arq,"  Cor: " "%s", aux->cor);
        fprintf(arq,"  Idade: " "%d", aux->idade);
        fprintf(arq,"  Id: " "%d\n",aux->id);
        fclose(arq);
  }
    
        system("cls");
	

    time_t currentTime;
    struct tm *timeinfo;
    currentTime = time(NULL);
    timeinfo = localtime(&currentTime);
    cout << "\n Horario de Cadastro: " << timeinfo->tm_hour;
    cout << ":" << timeinfo->tm_min<< ":" << timeinfo->tm_sec <<"\n";
   
}
// listar pet
void listapet(NO *lista) {
  	cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		cout << " \n *                   ANIMAIS JA CADASTRADOS                    *";
		cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
	while (lista != NULL) {
		cout << " \n\n Nome do Animal.: " << lista->nome;
		cout << " \n Raca do Animal...: " << lista->raca;
		cout << " \n Especie do Animal: " << lista->especie;
		cout << " \n Sexo do Animal...: " << lista->sexo;
		cout << " \n Cor do Animal....: " << lista->cor;
		cout << " \n Porte do Animal..: " << lista->porte;
		cout << " \n Idade do Animal...: " << lista->idade;
  	cout << " \n ID do animal.....: " << lista->id;
    cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		lista = lista->prox;
	}
  
  }

// Alterar info
void alterapet(NO **lista) {
	NO *aux = *lista;
	int id1, opcao;

		cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		cout << " \n *                 ALTERAR ANIMAIS CADASTRADOS                 *";
		cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";

	while (aux != NULL) {

		cout << "\n\n Animais cadastrados:";
		cout << " \n\n Nome do Animal....:" << aux->nome;
		cout << " \n Raca do Animal....:" << aux->raca;
		cout << " \n Especie do Animal.:" << aux->especie;
		cout << " \n Sexo do Animal....:" << aux->sexo;
		cout << " \n Cor do Animal.....:" << aux->cor;
		cout << " \n Porte do Animal...:" << aux->porte;
		cout << " \n Idade do Animal....:" << aux->idade;
		cout << " \n ID do animal......:" << aux->id;

		aux = aux->prox;
	}
	cout << " \n\n Digite o id do animal que deseja alterar:";
	cin >> id1;

	cout << " \n "
			"**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
	cout << "\n Digite a informacao a ser alterada";
	cout << "\n \n 1- Alterar nome do animal...:";
	cout << " \n 2- Alterar Raca do Animal...:";
	cout << " \n 3- Alterar Especie do Animal:";
	cout << " \n 4- Alterar Sexo do Animal...:";
	cout << " \n 5- Alterar Cor do Animal....:";
	cout << " \n 6- Alterar Porte do Animal..:";
  cout << " \n 7- Alterar a Idade Do animal:";
	cout << "\n Digite a sua opcao:";
	cin >> opcao;
	aux = (*lista);

	switch (opcao) {
	case 1:
		char nomepet[25];
		cout << " \n Informe o novo nome do animal:";
		cin >> nomepet;

		while (aux != NULL) {
			if (aux->id == id1) {
				strcpy(aux->nome, nomepet);
        break;
			}
			aux = aux->prox;
		}
		break;

	case 2:
		char racapet[20];
		cout << " \n Informe a nova raça do animal:";
		cin >> racapet;

		while (aux != NULL) {
			if (aux->id == id1) {
				strcpy(aux->raca, racapet);
			}
			aux = aux->prox;
		}
		break;


	case 3:
		char especiepet[20];
		cout << " \n Informe a nova especie do animal:";
		cin >> especiepet;

		while (aux != NULL) {
			if (aux->id == id1) {
				strcpy(aux->especie, especiepet);
			}
			aux = aux->prox;
		}
		break;

	case 4:
		char sexopet[2];
		cout << " \n Informe o novo sexo do animal:";
		cin >> sexopet;

		while (aux != NULL) {
			if (aux->id == id1) {
				strcpy(aux->sexo, sexopet);
			}
			aux = aux->prox;
		}
		break;

	case 5:
		char corpet[15];
		cout << " \n Informe a nova cor do animal: ";
		cin >> corpet;

		while (aux != NULL) {
			if (aux->id == id1) {
				strcpy(aux->cor, corpet);
			}
			aux = aux->prox;
		}
		break;

	case 6:
		char portepet[15];
		cout << " \n Informe o novo porte do animal:";
		cin >> portepet;

		while (aux != NULL) {
			if (aux->id == id1) {
				strcpy(aux->porte, portepet);
			}
			aux = aux->prox;
		}
		break;

    case 7:
		int idadepet;
		cout << " \n Informe a nova idade do animal:";
		cin >> idadepet;

		while (aux != NULL) {
			if (aux->id == id1) {
				
        aux->idade=idadepet;
			}
			aux = aux->prox;
		}
		break;
	}
}

//Remover pet
void removerPet(NO **lista) {
	int id1;
	NO *aux2 = *lista;
		
    cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		cout << " \n *                    REMOCAO DE ANIMAIS                       *";
		cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";

	while (aux2 != NULL) {
		cout << " \n\n Nome do Animal.: " << aux2->nome;
		cout << " \n Raca do Animal...: " << aux2->raca;
		cout << " \n Especie do Animal: " << aux2->especie;
		cout << " \n Sexo do Animal...: " << aux2->sexo;
		cout << " \n Cor do Animal....: " << aux2->cor;
		cout << " \n Porte do Animal..: " << aux2->porte;
		cout << " \n Peso do Animal...: " << aux2->idade;
		cout << " \n ID do animal.....:" << aux2->id;
		aux2 = aux2->prox;
	}

	cout << "\n\n Informe o valor id a ser removido da lista ligada :";
	cin >> id1;

	if ((*lista) == NULL)
		cout << "\n Lista vazia não tem como remover ! " << endl;

	else if ((*lista)->id == id1) {
		NO *lixo = (*lista);
		(*lista) = (*lista)->prox;
		free(lixo);
	} else {
		NO *aux = (*lista);
		while (aux != NULL) {
			if (aux->prox->id == id1) {
				NO *lixo = aux->prox;
				aux->prox = aux->prox->prox;
				free(lixo);
				break;
			}
			aux = aux->prox;
		}
	}
}
//contar pet
void contarpet(NO *lista) {
	int tam = 0;
	while (lista != NULL) {
		tam++;
		lista = lista->prox;
	}
  	cout << " \n\n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		cout << " \n *         QUANTIDADES DE ANIMAIS CADASTRADOS                  *";
		cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
	 if (tam != 0)
    {
      cout << "\n\n A quantidade de animais e:" << tam;
      cout << "\n\n";
    }
    else
        cout << " \n Nao a animal cadastrado.\n" ;
  
}

void QuantidadeEsp(NO *lista) {
	char especiepet1[20];
	int tam = 0;

	cout << "\n Digite a especie que deseja contabilizar:";
	cin.ignore();
  cin.getline(especiepet1, 25);

	while (lista != NULL) {
		if (strcmp(especiepet1, lista->especie) == 0) {
			tam++;
		}
		lista = lista->prox;
	}

	cout << "\n Quantidade de especies de animais cadastrados :" << tam << "\n\n";
}

//Buscar pet por nome
void buscarnomepet(NO *lista)
{
    cout << " \n\n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		cout << " \n *           BUSCAR ANIMAIS POR NOME                           *";
		cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
    int tam = 0;
    char nome1[25];
    cout << "\n Digite o nome que deseja buscar : ";
    cin.ignore();
    cin.getline(nome1, 25);

    while (lista != NULL)
    {
        if (strcmp(nome1, lista->nome) == 0)
        {
            cout << " \n\n Nome do Animal.: " << lista->nome;
	         	cout << " \n Raca do Animal...: " << lista->raca;
		        cout << " \n Especie do Animal: " << lista->especie;
		        cout << " \n Sexo do Animal...: " << lista->sexo;
	         	cout << " \n Cor do Animal....: " << lista->cor;
		        cout << " \n Porte do Animal..: " << lista->porte;
	        	cout << " \n Idade do Animal...: " << lista->idade;
          	cout << " \n ID do animal.....: " << lista->id;
            tam++;
        }
        lista = lista->prox;
    }
    
}
//busca especie
void buscarEsp(NO *lista) {
	char especiepet[20];
	int num = 0;

	cout << "\n Digite a especie que deseja procurar:";
	  cin.ignore();
    cin.getline(especiepet, 25);

	while (lista != NULL) {
		if (strcmp(especiepet, lista->especie) == 0) {
			cout << " \n\n Nome do Animal....: " << lista->nome;
			cout << " \n Raca do Animal....: " << lista->raca;
			cout << " \n Especie do Animal.: " << lista->especie;
			cout << " \n Sexo do Animal.: " << lista->sexo;
			cout << " \n Cor do Animal..: " << lista->cor;
			cout << " \n Porte do Animal: " << lista->porte;
			cout << " \n Peso do Animal.: " << lista->idade;
			cout << " \n ID do animal...:" << lista->id;
		}
		lista = lista->prox;
  }
		
	}

void buscaEspRaca(NO *lista) {
	char especiepet[20], racapet[20];
	int num = 0;

  	cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		cout << " \n *                   BUSCA ESPECIE E RACA                      *";
		cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";

	cout << "\n\nDigite a especie que deseja procurar:";
	cin >> especiepet;
	cout << "\nDigite a raca que deseja procurar:";
	cin >> racapet;

	while (lista != NULL) {
		if (strcmp(especiepet, lista->especie) == 0 &&
			strcmp(racapet, lista->raca) == 0) {
			cout << " \n\n Nome do Animal..: " << lista->nome;
			cout << " \n Raca do Animal....: " << lista->raca;
			cout << " \n Especie do Animal.: " << lista->especie;
			cout << " \n Sexo do Animal....: " << lista->sexo;
			cout << " \n Cor do Animal.....: " << lista->cor;
			cout << " \n Porte do Animal...: " << lista->porte;
			cout << " \n Peso do Animal....: " << lista->idade;
			cout << " \n ID do animal......: " << lista->id;
		}
		lista = lista->prox;
		
	}
}
void buscaEspRacaSexo(NO *lista) {
	char especiepet[20], racapet[20], sexopet[2];
	int num = 0;

    cout << " \n**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		cout << " \n*                 BUSCA ESPECIE E RACA  E SEXO                *";
		cout << " \n**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";

	cout << "\nDigite a especie que deseja procurar:";
	cin >> especiepet;
	cout << "\nDigite a raca que deseja procurar:";
	cin >> racapet;
	cout << "\nDigite genero que deseja procurar:";
	cin >> sexopet;

	while (lista != NULL) {
		if (strcmp(especiepet, lista->especie) == 0 &&
			strcmp(racapet, lista->raca) == 0 &&
			strcmp(sexopet, lista->sexo) == 0) {
			cout << " \n\n Nome do Animal..: " << lista->nome;
			cout << " \n Raca do Animal....: " << lista->raca;
			cout << " \n Especie do Animal.: " << lista->especie;
			cout << " \n Sexo do Animal....: " << lista->sexo;
			cout << " \n Cor do Animal.....: " << lista->cor;
			cout << " \n Porte do Animal...: " << lista->porte;
			cout << " \n Peso do Animal....: " << lista->idade;
			cout << " \n ID do animal......: " << lista->id;
		}
		lista = lista->prox;
		
	}
}



  void adicionarpetord(NO **lista, int *id) {
	*id = *id + 1;
  NO *aux;
	aux = (NO *)malloc(sizeof(NO));
  FILE *arq;
    
    cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		cout << " \n *                    ADICIONE UM ANIMAL                       *";
		cout << " \n **-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";

	
	if (aux != NULL) {
		
		cout << "\n\n Informe o Nome do Animal:";
		cin.ignore();
		cin.getline(aux->nome, 20);
		cout << "\n Informe o Raca do Animal:";
		cin.getline(aux->raca, 20);
		cout << "\n Informe a Especie do Animal:";
		cin.getline(aux->especie, 20);
		cout << "\n Informe o Sexo do Animal(F ou M):";
		cin.getline(aux->sexo, 2);
		cout << "\n Informe o Cor do Animal:";
		cin.getline(aux->cor, 15);
		cout << "\n Informe o Porte do Animal(pequeno, medio, grande):";
		cin.getline(aux->porte, 15);
		cout << "\n Informe a Idade do Animal:";
		cin >> aux->idade;

		aux->id = *id;
		aux->prox = NULL;
		

    cout <<"\n informacoes sendo gravadas no arquivo..."<<endl;
        arq = fopen("Entrada.txt", "a");
        fprintf(arq,"Nome: " "%s", aux->nome);
        fprintf(arq,"  Raca: " "%s", aux->raca);
        fprintf(arq,"  Especie: " "%s", aux->especie);
        fprintf(arq,"  Sexo: " "%s", aux->sexo);
        fprintf(arq,"  Porte: " "%s", aux->porte);
        fprintf(arq,"  Idade: " "%d", aux->idade);
        fprintf(arq,"  Id: " "%d\n",aux->id);
        fclose(arq);
  }
    
        system("cls");
	

  time_t currentTime;
    struct tm *timeinfo;
    currentTime = time(NULL);
    timeinfo = localtime(&currentTime);
    cout << "\n Horario de Cadastro: " << timeinfo->tm_hour;
    cout << ":" << timeinfo->tm_min<< ":" << timeinfo->tm_sec <<"\n";
    
    if ((*lista) == NULL)
    {
        aux->prox = (*lista);
        (*lista) = aux;
    }
    else
    {
        NO *anterior, *selec = (*lista);

        while (selec != NULL && strcmp(selec->nome, aux->nome) > 0)
        {
            anterior =selec;
            selec = selec->prox;
        }
        if (selec == (*lista))
        {
            aux->prox = (*lista);
            (*lista) = aux;
        }
        else
        {
            aux->prox = anterior->prox;
            anterior->prox = aux;
        }
}
  }



int main() {
	NO *lista = NULL;
	int opcao;
	int id = 0;

cabecalho();
	do {
	  cout << " \n**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		cout << " \n*                   ESCOLHA UMA OPCAO                         *";
		cout << " \n**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*";
		cout << " \n 1- Para cadastrar um novo animal.";
		cout << " \n 2- Para listar Animais Cadastrados.";
		cout << " \n 3- Para alterar informacoes do Animal.";
		cout << " \n 4- Para remover Animais Cadastrados.";
		cout << " \n 5- Para contar Animais cadastrados.";
		cout << " \n 6- Para contar as Especies cadastrados.";
		cout << " \n 7- Para Buscar Especies em comum entre animais.";
		cout << " \n 8- Para Buscar Especies e racas em comum entre animais.";
		cout << " \n 9- Para Buscar Especies,racas e sexo em comum entre animais.";
    cout << " \n 10- Para Buscara Animal por Nome.";
		cout << " \n 11- Para inserir em ordem alfabetica.";
		cout << " \n 0- para sair ";

		cout << " \n Digite a sua opcao:";
		cin >> opcao;

		switch (opcao) {
		case 1:
			adicionarpet(&lista, &id);
			break;
		case 2:
			listapet(lista);
			break;
		case 3:
			alterapet(&lista);
			break;
		case 4:
			removerPet(&lista);
		case 5:
			contarpet(lista);
			break;
		case 6:
			QuantidadeEsp(lista);
		case 7:
			buscarEsp(lista);
			break;
		case 8:
			buscaEspRaca(lista);
			break;
		case 9:
			buscaEspRacaSexo(lista);
			break;
    case 10:
      buscarnomepet(lista);
      break;
    case 11:
    adicionarpetord(&lista, &id);
    break;
		}
	}while (opcao!=0);

  cout <<"\n Funcoes implementadas:Salvar no arquivo.";
  cout <<"\n Ordem alfabetica.";
  cout <<"\n Horario da adicao do animal.";
  cout <<"\n Design do trabalaho.\n";


	return 0;
}