/*Author: Rui Pedro Paiva
Teoria da Informação, LEI, 2007/2008*/

/*
AUTORES DESTA PL2 2015/2016
Trabalho realizado por:
- Gonçalo Lopes (2014205060)
- João Reis (2014216372)
- Paulo Cruz (2014205161)
*/

#include <stdio.h>
#include <string.h>


typedef struct hfnode
{
	short index;  //se folha, guarda posição no alfabeto; senão, -1;
	short level; // nível do nó na árvore
	struct hfnode *left, *right;  //referências para os filhos direito e esquerdo: é folha se ambos forem NULL	
} HFNode;


typedef struct huffmantree
{
	HFNode *root, *curNode;  //raíz da árvore e nó actual na travessia
} HuffmanTree;


HuffmanTree* createHFTree();
HFNode* createHFNode(short index, short level, HFNode *left, HFNode *right);
int addNode(HuffmanTree *hft, char *s, int ind, short verbose);
int nextNode(HuffmanTree *hft, char c); //utilizada para pesquisa na árvore bit a bit (e não código inteiro de uma vez)
int findNode(HuffmanTree *hft, char* s, short verbose);  //procura código s a partir da raíz (código inteiro de uma vez)
int findNode(HuffmanTree *hft, char *s, HFNode *cur, short verbose);  //procura código a partir do nó cur
short isLeaf(HFNode *n);
void resetCurNode (HuffmanTree *hft);
