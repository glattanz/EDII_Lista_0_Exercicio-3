//pilha.h
struct Pilha{
	int * vet;
	int qtd;
};

//typedef faz com que o tipo de variavel Pilha seja conhecido no código
//agora existe o tipo de variavel pilha
typedef struct Pilha pilha;

void cadastro(pilha* p);

void imprime(pilha* p);

void quantidade(pilha* p);

int pop(pilha* p);

int top();

bool isEmpty(pilha* p);
