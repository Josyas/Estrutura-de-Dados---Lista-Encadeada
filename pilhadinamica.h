typedef int TipoItem;

struct No
{
	TipoItem valor;
	No* proximo;
};

class pilhadinamica{
	private:
		No* NoTopo;
	public:
		pilhadinamica();
		~pilhadinamica();
		bool estavazio();
		bool estacheio();
		void inserir(TipoItem);
		TipoItem remover();
		void imprimir();
};
