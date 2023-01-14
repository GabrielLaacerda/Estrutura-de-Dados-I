#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct celula
{
    int cod;
    char nome[80];
    char categoria[50];
    int pag;
    char resumo[5000];
    float preco;
    int quantidade;
    struct celula *prox;
    struct celula *ant;

} celula;


void criar_lista(celula **inicio)
{
    *inicio = NULL;
}

void consulta_nome(celula *lista,char name[])
{
    celula *atual = lista;

    int flag = 0;

    while(atual != NULL)
    {
        if(strcmp(atual->nome,name) == 0)
        {
            flag = 1;

            printf("---------------------------------------\n");
            printf("Nome: %s",atual->nome);
            printf("Categoria: %s",atual->categoria);
            printf("Quantidade de Paginas: %d\n",atual->pag);
            printf("Codigo: %d\n",atual->cod);
            printf("Preço: %.2fR$\n",atual->preco);
            printf("Quantidade em estoque: %d\n",atual->quantidade);
            printf("Resumo: %s",atual->resumo);
            printf("---------------------------------------\n");

            atual = NULL;

        }
        else
        {
            atual = atual->prox;

        }

    }

    if(flag == 0)
    {

        printf("\nLIVRO NAO FOI ENCONTRADO\n");

    }

}

celula *adicionar(celula *lista, int codigo, int quant)
{
    int flag = 0;

    celula *atual = lista;

    if(atual == NULL)
    {
        printf("\nNAO HA LIVROS CADASTRADOS\n\n");
        return lista;

    }

    else
    {
        while(atual != NULL)
        {
            if(atual->cod == codigo)
            {
                flag = 1;
                atual->quantidade+=quant;

                return lista;

            }

            atual = atual->prox;
        }

        if(flag == 0)
        {
            printf("\nLIVRO NAO ENCONTRADO\n\n");
            return lista;

        }
    }

}
celula *venda(celula *lista, int codigo,FILE *f)
{
    int flag = 0;

    celula *atual = lista;

    if(atual == NULL)
    {
        printf("\nNAO HA LIVROS CADASTRADOS\n\n");
        return lista;

    }
    else
    {
        while(atual != NULL)
        {
            if(atual->cod == codigo)
            {
                if(atual->quantidade > 0)
                {
                    flag = 1;

                    fprintf(f,"---------------------------------------\n");
                    fprintf(f,"Nome: %s",atual->nome);
                    fprintf(f,"Codigo: %d\n",atual->cod);
                    fprintf(f,"Quantidade vendida: 1un\n");
                    fprintf(f,"---------------------------------------\n\n");

                    atual->quantidade--;

                    fclose(f);

                    return lista;

                }
                else
                {
                    printf("\nNAO HA ESTOQUE DESTE LIVRO\n\n");

                    fclose(f);

                    return lista;

                }

            }

            atual = atual->prox;
        }

        if(flag == 0)
        {
            printf("\nLIVRO NAO ENCONTRADO\n");
            return lista;

            fclose(f);

        }
    }
}
celula *inserir_lista(celula *lista, int codigo, char nome[], char cat[], int paginas, char res[],float valor, int quant)
{
    celula *atual = lista;
    celula *anterior = NULL;
    celula *p = (celula *)malloc(sizeof(celula));

    if(p != NULL)
    {
        p->cod = codigo;
        strcpy(p->nome,nome);
        strcpy(p->categoria,cat);
        p->pag = paginas;
        strcpy(p->resumo,res);
        p->preco = valor;
        p->quantidade = quant;
        p->prox = NULL;

        while(atual != NULL && strcmp(atual->nome,nome) < 0 )
        {
            anterior = atual;
            atual = atual->prox;
        }

        if(atual == lista)
        {
            if(atual == NULL)
            {
                lista = p;
                p->ant = NULL;
                p->prox = NULL;

            }
            else
            {
                lista = p;
                p->ant = NULL;
                p->prox = atual;
                atual->ant = p;

            }

        }
        else
        {

            if(atual != NULL)
            {
                anterior->prox = p;
                p->ant = anterior;

                p->prox = atual;
                atual->ant = p;


            }
            else
            {

                anterior->prox = p;
                p->ant = anterior;

            }

        }

        return lista;

    }
    else
    {

        printf("ERRO AO REGISTRAR LIVRO\n");

        return NULL;

    }
}

void listar(celula *lista)
{
    if( lista == NULL)
    {
        printf("NAO HA LIVROS ADICIONADOS EM NOSSO REGISTRO\n");

    }
    else
    {

        printf("\n------------LISTA DE LIVROS------------\n\n");

        for(celula *aux=lista; aux != NULL; aux= aux->prox)
        {
            printf("---------------------------------------\n");
            printf("Nome: %s",aux->nome);
            printf("Categoria: %s",aux->categoria);
            printf("Quantidade de Paginas: %d\n",aux->pag);
            printf("Codigo: %d\n",aux->cod);
            printf("Preço: %.2f\n",aux->preco);
            printf("Quantidade em estoque: %d\n",aux->quantidade);
            printf("Resumo: %s",aux->resumo);
            printf("---------------------------------------\n");


        }
        printf("\n");
    }

}

int buscar_cod(celula *lista,int cod)
{
    celula *atual = lista;

    while(atual != NULL)
    {
        if(atual->cod == cod)
        {
            return -1;

        }

        atual = atual->prox;
    }

    return 1;
}

int menu()
{
    int op;

    printf("Menu Biblitoeca- Digite a opçao desejada\n\n");
    printf("->1 - Registrar livros\n");
    printf("->2 - Adicionar unidades a livros ja registrados\n");
    printf("->3 - Vender Livro\n");
    printf("->4 - Mostrar todos os Livros\n");
    printf("->5 - Consultar livro por nome\n");
    printf("->6- Sair\n");

    scanf("%d",&op);

    return op;

}

int main()
{
    int valido;
    int opcao;
    int cod,quantidade,paginas;
    float valor;
    char nome[80], categ[50], resumo[5000];
    int codigo;

    FILE *f;

    celula *inicio;

    criar_lista(&inicio);

    do
    {
        opcao = menu();

        switch(opcao)
        {

        case 1:

            setbuf(stdin,NULL);
            printf("\n----------ADICIONAR LIVROS----------\n\n");

            printf("Codigo do Livro: ");
            scanf("%d",&cod);

            valido = buscar_cod(inicio,cod);

            if(valido == -1)
            {
                printf("\nCADASTRE O LIVRO COM UM CODIGO QUE NAO TENHA SIDO USADO AINDA\n\n");
            }
            else
            {
                setbuf(stdin,NULL);
                printf("Nome: ");
                fgets(nome,80,stdin);
                setbuf(stdin,NULL);
                printf("Categoria: ");
                fgets(categ,50,stdin);
                setbuf(stdin,NULL);
                printf("Resumo: ");
                fgets(resumo,5000,stdin);
                setbuf(stdin,NULL);
                printf("Quantidade: ");
                scanf("%d",&quantidade);
                printf("Numero de Paginas: ");
                scanf("%d",&paginas);
                printf("Preco: ");
                scanf("%f",&valor);
                printf("\n");

                inicio = inserir_lista(inicio,cod,nome,categ,paginas,resumo,valor,quantidade);

            }

            break;

        case 2:

            printf("\nDigite o codigo do livro: ");
            scanf("%d",&codigo);
            printf("Digite a quantidade a ser inserida: ");
            scanf("%d",&quantidade);
            printf("\n");

            if(quantidade <= 0)
            {

                printf("\n\nNAO FOI POSSIVEL REALIZAR A OPERACAO\n\n");
                break;

            }
            else
            {
                inicio = adicionar(inicio,codigo,quantidade);

            }

            break;

        case 3:

            setbuf(stdin,NULL);

            printf("\nDigite o codigo do livro: ");
            scanf("%d",&codigo);
            setbuf(stdin,NULL);

            f = fopen("Vendas.txt","a+");

            inicio = venda(inicio,codigo,f);


            break;

        case 4:

            listar(inicio);


            break;

        case 5:

            setbuf(stdin,NULL);
            printf("Digite o nome do livro a ser buscado: ");
            fgets(nome,80,stdin);
            setbuf(stdin,NULL);

            consulta_nome(inicio,nome);
            printf("\n");

            break;

        case 6:

            return 0;

        }

    }
    while(opcao!=6);

    return 0;
}
