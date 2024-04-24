#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <imobiliaria.h>

void MostrarLogin(){

    char login[10] = "teste";
    char login1[10];
    char senha[10] = "teste";
    char senha1[10];        
    int login_feito = 0;

    while(!login_feito){
        printf("Digite o Login: ");
        scanf("%c", login1);

        printf("Digite a Senha: ");
        scanf("%c", senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nLOGADO!\n\n");
            login_feito = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");    
    }

}

void Mostraremail(){
	
  char email[50]={"fun@emi.co"};
  int tam=strlen(email);
  int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i;
  
  for (i = 0; i < tam; i++) {
    char c = email[i];
    if(c == '@') {
      if (arroba)
        break; 
      arroba = 1;
      if (i < 3)
        break; 
    }
    else if (arroba) { 
      if (ponto) { 
        depoisPonto++;
      }
      else if(c == '.') {
        ponto = 1;
        if (antesPonto < 3) {
          break; 
        }
      }
      else {
        antesPonto++;
      }
    }
  } 

  if (i == tam && depoisPonto > 1)
    printf("Valido");
  else
    printf("Invalido");
}	


void MostrarMenu(){

    printf("*************************************\n\n");
    printf("******SEJA BEM VINDO A IMOBILIÁRIA SERTAO******\n\n");
    printf("*************************************\n\n");

    printf("1) - CADASTRO DE CLIENTES\n");
    printf("2) - CADASTRO DE CASAS\n");
    printf("3) - SAIR DO SISTEMA\n\n");    
    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opçao);

    getchar();    

}

void CadastroClientes(){

    printf("\n\nAdicione os dados do Cliente\n");

}

void CadastroCasas(){

    printf("\n\nAdicione as casas À venda\n");

}

int main(){

    FILE *file = fopen ("./Imobiliaria.txt", "w");
    MostrarLogin();
    
    Mostraremail();

    MostrarMenu();

        switch (opcao)

        {

            case 1 : 

                CadastroClientes();

            break;

            case 2 : 

                CadastroCasas();

            break;

            default :

                printf("Opção Invalida!");

            break;    
        }

        getchar();

fclose (file);

    return 0;
}
