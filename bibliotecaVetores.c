#include <stdio.h>
#include <C:\Users\Isaac\OneDrive - IFCE\Documentos\Disciplinas\PEED\estruturaDeDados\estruturaDeDados\aulaVetores\bibliotecaVetores.h>

/// @brief Função que realiza a travessia do vetor, imprimindo cada uma de seus elementos e o tamanho do vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
void travessiaVetor(int vetor[], int tamanhoAtualVetor){

    for(int i = 0; i<tamanhoAtualVetor;i++){
        printf("%d ", vetor[i]);
    }

}

/// @brief Função que executa uma busca linear dentro de um vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return retorna o indice do primeiro elemento identificado no array ou retorna -1 caso o elemento não esteja presente
int buscaElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){
    for(int i = 0; i <= tamanhoAtualVetor; i++){
        if(valorElemento == vetor[i]){
            printf(i);
            return 0;
        }else{
            return -1;
        }
    }
}

/// @brief Funçção que insere um elemento numa posição especifica do vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @param posicaoInsercao 
void insereElemento(int vetor[], int tamanhoAtualVetor, int valorElemento, int posicaoInsercao){
    int aux1Vetor[posicaoInsercao];
    int aux2Vetor[tamanhoAtualVetor - posicaoInsercao];
    int newVetor[tamanhoAtualVetor + 1];
    for(int i = 0; i <= posicaoInsercao - 1; i++){
        aux1Vetor[i] = vetor[i];
        if(i == posicaoInsercao - 1){
            aux1Vetor[i + 1] = valorElemento;
        }
    }
    for(int i = posicaoInsercao; i <= tamanhoAtualVetor; i++){
        aux2Vetor[i] = vetor[i];
    }
    for(int i = 0; i <= posicaoInsercao; i++){
        newVetor[i] = aux1Vetor[i];
    }
    for(int i = posicaoInsercao + 1; i <= tamanhoAtualVetor + 1; i++){
        newVetor[i] = aux2Vetor[i];
    }
}

/// @brief A função que deleta um elemento de um vetor. Caso o elemento nao seja encontrado não executa nenhum operação no vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return Retorna o tamanho atual do vetor
int excluirElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){
    int indiceValor = 0;
    for(int i = 0; i <= tamanhoAtualVetor; i++){
        if(valorElemento == vetor[i]){
            i += 1;
        }
        vetor[indiceValor] = vetor[i];
        indiceValor += 1;
    }
}