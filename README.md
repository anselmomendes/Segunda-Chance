# :wrench: Segunda Chance


## Gerenciamento de memória

* O algoritimo Segunda chance implementa **FIFO** *(first in, first out)* modificado, ele acresenta um bit R para cada bloco de memória com a intenção manter na memória as páginas que mais estão sendo utilizadas.

* O bit dos blocos de memória possui dois estados 0 ou 1.
* Toda vez que a página é acessada o seu bit é atualizado para 1.
* No momento que o Sistema Operacional (SO) tenta remover a página, ele verifica o bit R.
  * Se for 0 (página não foi acessada), remova-a.
  * Se for 1, zere-o e de uma segunda chance à pobre da página.
 
## Como utilizar o programa?

* Quando executamos o programa ele nós leva para o menu com seis opções:

1. Exibir Dados.
2. Alocar Dados.
3. Acessar Dados.
4. Excluir Dados.
5. Simular Preenchimento.
6. Sair.

### Exibir Dados.

![Exibir Dados](https://github.com/anselmomendes/Segunda-Chance/blob/master/imagens/001.jpg)

Essa função é muito simplis, ela mostra a página de memória e seus respectivos conteúdos e o bit R como na figura acima.

### Alocar Dados.

![Alocar Dados](https://github.com/anselmomendes/Segunda-Chance/blob/master/imagens/004.jpg)

Essa função permite escolher uma posição da página, e substituir ou setar um valor para posição, como consequência o bit R será setado para 1.

### Acessar Dados.

![Acessar Dados](https://github.com/anselmomendes/Segunda-Chance/blob/master/imagens/005.jpg)

Essa função permite acessar a posição da página, essa ação permite setar o bit R para 1, caso tenha alguma informação na posição de memória.

### Excluir Dados.

A função excluir realiza a consulta do bit R e realiza a exclusão do conteúdo caso o bit esteja vazio. No caso que ele esteja setado com 1, ele apenas será decrementado para todos os bits (neste caso).

![Excluir Dados](https://github.com/anselmomendes/Segunda-Chance/blob/master/imagens/006a.jpg)
![Excluir Dados](https://github.com/anselmomendes/Segunda-Chance/blob/master/imagens/006b.jpg)

### Simular preenchimento.

![Simular Preenchimento](https://github.com/anselmomendes/Segunda-Chance/blob/master/imagens/007.jpg)

A função simular preenchimento realiza de forma aleatória a inicialização dos dados e do Bit R.

### Sair

![Sair](https://github.com/anselmomendes/Segunda-Chance/blob/master/imagens/008.jpg)

A função sair fecha a aplicação.

## Melhorias

* Temos a intenção de usar alguma biblioteca grafica para obter uma interface gráfica.
* Melhorar a escrita do código atraves de tecnicas de cleanCode.

## Autores

- [Anselmo Mendes](https://github.com/anselmomendes)

- [Fernando Freire](https://github.com/fernandofreire01)
