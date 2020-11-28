
void desenhaLosangoAmarelo(void)
{
    //desenhando o losango

    //cor amarela
    glColor4f(1, 1, 0, 0);

    //faz triangulo amarelo para a esquerda
    glBegin(GL_TRIANGLE_STRIP);
        glVertex2f(-0.95, 0);
        glVertex2f(0, 0.95);
        glVertex2f(0, -0.95);
    glEnd();
    glFlush();

    //faz triangulo amarelo para a direita
    glBegin(GL_TRIANGLE_STRIP);
        glVertex2f(0, 0.95);
        glVertex2f(0.95, 0);
        glVertex2f(0, -0.95);
    glEnd();
    glFlush();

}

void desenhaCirculoAzul(void)
{
    //cor branca
    glColor4f(0, 0, 0.5, 0);

    //desenhando circulo
    glBegin(GL_POLYGON);
        glVertex2f(0.40,0.40); // sup direito
        glVertex2f(0.458, 0.10); //quina sup direita faixa branca
        glVertex2f(0.458, -0.10); //quinda inf direita faixa branca



        glVertex2f(0.40, -0.40); //inf direito


        glVertex2f(0.13, -0.56); // meio inferior
        glVertex2f(-0.13, -0.56); // meio superior

        //

        glVertex2f(-0.40, -0.40); //inf esquerdo
        glVertex2f(-0.458, -0.10); //quina faixa inf esquerdo
        glVertex2f(-0.458, 0.10); //quina faixa sup esquerdo


        glVertex2f(-0.40, 0.40); // sup esquerdo


        glVertex2f(-0.13, 0.56); // meio superior
        glVertex2f(0.13, 0.56); // meio superior

        //


    glEnd();
    glFlush();


}

void desenhaRetanguloBranco(void)
{
    //cor branca
    glColor4f(1, 1, 1, 0);

    //retangulo branco
    glBegin(GL_POLYGON);
        glVertex2f(0.458, 0.10); // sup direito
        glVertex2f(0.458, -0.10); // inf direito
        glVertex2f(-0.458, -0.10); //inf esquerdo
        glVertex2f(-0.458, 0.10); //sup esquerdo
    glEnd();
    glFlush();

    glLineWidth(20);




    glColor4f(1, 1, 1, 0);

}

void desenhaNome(void)
{
    // escrevendo o nome

    glColor3f(0.350, 0, 350);

    glLineWidth(10);

    //A
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.26, -0.08);
        glVertex2f(-0.21, 0.08);
        glVertex2f(-0.16, -0.08);
    glEnd();
    glFlush();

    //risco do A
    glBegin(GL_LINES);
        glVertex2f(-0.24, -0.01);
        glVertex2f(-0.18, -0.01);
    glEnd();
    glFlush();


    //N
    glBegin(GL_LINE_STRIP);

        glVertex2f(-0.13, -0.08);
        glVertex2f(-0.13, 0.08);
        glVertex2f(-0.05, -0.08);
        glVertex2f(-0.05, 0.08);
    glEnd();
    glFlush();

    //G
    glBegin(GL_LINE_STRIP);
        glVertex2f(0.075, 0.08);
        glVertex2f(-0.01, 0.08);
        glVertex2f(-0.01, -0.07);
        glVertex2f(0.075, -0.07);
        glVertex2f(0.075, 0.001);
        glVertex2f(0.05, 0.001);
    glEnd();
    glFlush();

    //E
    glBegin(GL_LINE_STRIP);
        glVertex2f(0.19, 0.08);
        glVertex2f(0.12, 0.08);
        glVertex2f(0.12, 0.001);
        glVertex2f(0.17, 0.001);
        glVertex2f(0.12, 0.001);
        glVertex2f(0.12, -0.07);
        glVertex2f(0.19, -0.07);
    glEnd();
    glFlush();

    //L
    glBegin(GL_LINE_STRIP);
        glVertex2f(0.22, 0.09);
        glVertex2f(0.22, -0.07);
        glVertex2f(0.30, -0.07);
    glEnd();
    glFlush();

}

void desenhaEstrelas(void)
{
    glLineWidth(40);


    glColor3f(1, 1, 1);

    glBegin(GL_LINES);
        glVertex2f(0.2, 0.2);
        glVertex2f(0.18, 0.2);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
        glVertex2f(-0.3, -0.3);
        glVertex2f(-0.28, -0.3);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
        glVertex2f(0.3, -0.2);
        glVertex2f(0.28, -0.2);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
        glVertex2f(0.1, -0.25);
        glVertex2f(0.08, -0.25);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
        glVertex2f(0, -0.37);
        glVertex2f(-0.02, -0.37);
    glEnd();
    glFlush();

}



