/*

*                        Ciencia da Computacao - PUC Pocos de Caldas

* Modelagem e Construcao de Aplicacoes 3D
* Professor: Will Machado
* 2 periodo

* Aluna: Angelica dos Santos
* Contato: santosangelicassp@gmail.com

* Trabalho: Implementacao de Transformacoes Afins em OpenGL
* Data entrega projeto: 16/09/2020


*                                       Proposta:

*   1 - Desenhar o seu nome na tela usando as primitivas graficas.

*   2 - Limitar a aplicacao da transformacao afins de escalamento nao permitindo o espelhamento vertical.

*   3 - Permitir a aplicacao da transformacao afins de rotacao.

*   4 - Permitir a aplicacao da transformacao afins de translacao.

*   Entregar todo o codigo do projeto (executavel e codigo-fonte), inserindo o arquivo executavel na raiz.

*       |~~~~~~~~~~~~~~~~ E RECOMENDADO COMPILAR NO TERMINAL CASO ESTEJA NO LINUX ~~~~~~~~~~~~~~~~~|

*       |  >>>>>>>>>        gcc -Wall main.c -lGL -lGLU -lglut -lGLEW -o main           <<<<<<<<<  |

*       |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|

*/


#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdio.h>


#include "funcoes.h"

void keys(unsigned char tecla, GLint x, GLint y);
void transformacoes(void);
void desenhaQuadradoVerde(void);

GLfloat escala = 7;

GLfloat anguloX = 0;
GLfloat anguloY = 0;
GLfloat anguloZ = 0;


int main(int argc, char** argv)
{

    printf("------------------------------------------------------");
    printf("\n\n\tAperte ' k ' para receber instrucoes\n\n");
    printf("------------------------------------------------------");

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);

    //tamanho da janela criada
    glutInitWindowSize(1000,800);
    //posi�ao na tela em que a janela vai aparecer
    glutInitWindowPosition(700,200);

    //titulo que aparecer� no topo da janela
    glutCreateWindow("Escrevendo meu nominho na bandeira!");

    //fun��o que far� o fundo bonitinho

    glutKeyboardFunc(keys);

    glutDisplayFunc(desenhaQuadradoVerde);

    glutMainLoop();

    return 0;
}

void desenhaQuadradoVerde(void)
{
    glClear( GL_COLOR_BUFFER_BIT );

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    //ajusta posi��o da camera
    gluOrtho2D(-8, 8, -8, 8);

    glScalef(escala,escala,0);

    glRotatef(anguloX,1,0,0);
    glRotatef(anguloY,0,1,0);
    glRotatef(anguloZ,0,0,1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    //cor verde
    glColor4f(0, 0.4, 0, 0);

    //colocando um retangulo de fundo com a cor verde

    glBegin(GL_POLYGON);
        glVertex2f(-1, -1);
        glVertex2f(-1, 1);
        glVertex2f(1, 1);
        glVertex2f(1, -1);
    glEnd();
    glFlush();

    desenhaLosangoAmarelo();

    desenhaCirculoAzul();

    desenhaRetanguloBranco();

    desenhaNome();

    desenhaEstrelas();


}



void keys(unsigned char tecla, GLint x, GLint y)
{
    switch (tecla)
    {
        case '+':
            escala = escala * 1.1f;
        break;

        case '-':
            escala = escala * 0.9f;
        break;

        case 'w':
            anguloX = anguloX + 10;
            glPushMatrix();
        break;

        case 's':
            anguloX = anguloX - 10;
            glPushMatrix();
        break;

        case 'd':
            anguloY = anguloY + 10;
            glPushMatrix();
        break;

        case 'a':
            anguloY = anguloY - 10;
            glPushMatrix();
        break;

         case 'q':
            anguloZ = anguloZ + 10;
            glPushMatrix();
        break;

        case 'e':
            anguloZ = anguloZ - 10;
            glPushMatrix();
        break;

        case 'k':
            printf("\n------------------------------------------------------");
            printf("\n\n\t >>> PARA ROTACIONAR, USE AS TECLAS: <<<\n");
            printf("\n\t\t W & S -> eixo X");
            printf("\n\t\t A & D -> eixo Y");
            printf("\n\t\t Q & E -> eixo Z");
            printf("\n------------------------------------------------------");
        break;
    }

    desenhaQuadradoVerde();
}

